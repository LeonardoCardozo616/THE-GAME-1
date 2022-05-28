#pragma once
#include "ListaEntidades.h"

class Gerenciador_Colisoes
{
private:
	ListaEntidades* EntidadesMoveis;
	ListaEntidades* EntidadesFixas;

public:
	Gerenciador_Colisoes(ListaEntidades* ListaMoveis = NULL, ListaEntidades* ListaFixas = NULL);
	~Gerenciador_Colisoes();

	void checkColisoes();
	void handleColisoes();
};

