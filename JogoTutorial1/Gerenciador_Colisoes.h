#pragma once
#include "ListaEntidades.h"

class Gerenciador_Colisoes
{
private:
	ListaEntidades* LE;

public:
	Gerenciador_Colisoes();
	~Gerenciador_Colisoes();

	void checkColisoes();
	void handleColisoes();
};

