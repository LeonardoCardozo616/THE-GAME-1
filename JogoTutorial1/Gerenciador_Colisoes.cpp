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

/* Função para gerenciar as colisoes entre entidades.
   Até o momento gerencia apenas colisões entre entidades sem distinção entre fixas e móveis
   SÓ FUNCIONA PARA UMA ENTIDADE MOVEL (A ÚLTIMA DA LISTA) E VÁRIAS ENTIDADES FIXAS*/
void Gerenciador_Colisoes::checkColisoes()
{
	int i, j;

	Elemento<Entidade>* pElEntidade1;
	Elemento<Entidade>* pElEntidade2;

	Entidade* pEntidade1;
	Entidade* pEntidade2;

	CoordF distCentro;
	CoordF somaTam;

	int qtdEntidades = Entidades->getLength();

	//if (numEntMoveis == 0)
	//{
		//return;
	//}

	pElEntidade1 = Entidades->getElemento(0);

	for (i = 0; i < qtdEntidades; i++)
	{
		pElEntidade2 = Entidades->getElemento(0);
		for (j = 0; j < qtdEntidades; j++)
		{
			if (i != j)
			{
				pEntidade1 = pElEntidade1->getItem();
				pEntidade2 = (*Entidades)[j];

				distCentro = pEntidade1->getPosicao() - pEntidade2->getPosicao();
				distCentro.calculaAbs();

				somaTam = pEntidade1->getTamanho() / 2.f + pEntidade2->getTamanho() / 2.f;

				if (distCentro.getX() < somaTam.getX() && distCentro.getY() < somaTam.getY())
				{
					pEntidade2->colisao(pEntidade1, somaTam - distCentro);
					//std::cout << "colisão" << std::endl;
				}
			}
			pElEntidade2 = pElEntidade2->getPprox();
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
