#include "Ente.h"

Ente::Ente(CoordF pos, CoordF tam) :
tamanho(tam),
posicao(pos)
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

float Ente::getLargura()
{
	return tamanho.getX();
}

float Ente::getAltura()
{
	return tamanho.getY();
}

void Ente::imprimir()
{
}
