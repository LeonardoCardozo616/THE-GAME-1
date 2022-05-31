#include "Gerenciador_Colisoes.h"
#include "Elemento.h"

Gerenciador_Colisoes::Gerenciador_Colisoes(ListaEntidades* LE) //ListaEntidades* ListaMoveis, ListaEntidades* ListaFixas):
//EntidadesMoveis(ListaMoveis),
//EntidadesFixas(ListaFixas)
{
	Entidades = LE;
}

Gerenciador_Colisoes::~Gerenciador_Colisoes()
{
	Entidades = NULL;
	//EntidadesMoveis = NULL;
	//EntidadesFixas = NULL;
}

/* Fun��o para gerenciar as colisoes entre entidades.
   At� o momento gerencia apenas colis�es entre entidades sem distin��o entre fixas e m�veis
   S� FUNCIONA PARA UMA ENTIDADE MOVEL (A �LTIMA DA LISTA) E V�RIAS ENTIDADES FIXAS*/
void Gerenciador_Colisoes::checkColisoes()
{
	int i, j;

	Elemento<Entidade>* pElEntidade1;
	Elemento<Entidade>* pElEntidade2;

	Entidade* pEntidade1;
	Entidade* pEntidade2;

	CoordF distCentro;
	CoordF interseccao;

	int qtdEntidades = Entidades->getLength();

	//if (numEntMoveis == 0)
	//{
		//return;
	//}

	pElEntidade1 = Entidades->getElemento(0);

	for (i = 0; i < qtdEntidades; i++)
	{
		j = i + 1;

		pElEntidade2 = Entidades->getElemento(j);

		while (j < qtdEntidades)
		{
			pEntidade1 = pElEntidade1->getItem();
			pEntidade2 = pElEntidade2->getItem();

			distCentro = pEntidade2->getPosicao() - pEntidade1->getPosicao();

			interseccao -= (pEntidade1->getTamanho() / 2.0f + pEntidade2->getTamanho() / 2.0f);
			interseccao.atualizarX(fabs(distCentro.getX()));
			interseccao.atualizarY(fabs(distCentro.getY()));

			if (interseccao.getX() < 0.0f && interseccao.getY() < 0.0f)
			{
				pEntidade2->colisao(pEntidade1, interseccao);
				std::cout << "colis�o" << std::endl;
			}

			pElEntidade2 = pElEntidade2->getPprox();

			j++;
		}

		pElEntidade1 = pElEntidade1->getPprox();
	}
}

float menor(float lado1, float lado2)
{
	if (lado1 < lado2)
		return lado1;
	return lado2;
}
