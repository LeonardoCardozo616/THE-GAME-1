#include "Gerenciador_Colisoes.h"

Gerenciador_Colisoes::Gerenciador_Colisoes(ListaEntidades* ListaMoveis, ListaEntidades* ListaFixas):
EntidadesMoveis(ListaMoveis),
EntidadesFixas(ListaFixas)
{
}

Gerenciador_Colisoes::~Gerenciador_Colisoes()
{
	EntidadesMoveis = NULL;
	EntidadesFixas = NULL;
}

void Gerenciador_Colisoes::checkColisoes()
{


	for (int i = 0; i < EntidadesFixas->getLength(); i++)
	{
		for (int j = i + 1; j < EntidadesMoveis->getLength(); i++)
		{

		}
	}

	for (int i = 0; i < EntidadesMoveis->getLength(); i++)
	{
		for (int j = i + 1; j < EntidadesMoveis->getLength(); i++)
		{

		}
	}
}
