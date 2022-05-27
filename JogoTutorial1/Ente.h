#pragma once
#include "CoordenadaTL.h"

class Ente
{
protected:
	CoordF posicao;
	CoordF tamanho;
public:
	Ente();
	~Ente();
	void executar() {};
	void imprimir();
};

