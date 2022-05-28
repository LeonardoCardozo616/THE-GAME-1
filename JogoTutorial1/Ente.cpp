#include "Ente.h"

Ente::Ente(CoordF posicao, CoordF tamanho) :
	posicao(posicao),
	tamanho(tamanho)
{
}

Ente::~Ente()
{
}

void Ente::setPosicao(CoordF pos)
{
	this->posicao = pos;
}

CoordF Ente::getPosicao() const
{
	return posicao;
}

void Ente::setTamanho(CoordF tam)
{
	this->tamanho = tam;
}

CoordF Ente::getTamanho() const
{
	return tamanho;
}

void Ente::imprimir()
{
}
