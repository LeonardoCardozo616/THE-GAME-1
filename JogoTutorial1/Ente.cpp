#include "Ente.h"

/*Construtora*/
Ente::Ente(CoordF pos, CoordF tam) :
tamanho(tam),
posicao(pos)
{
}

Ente::~Ente()
{
}

/*Define a posicao*/
void Ente::setPosicao(CoordF pos)
{
	this->posicao = pos;
}

/*Pegar a posicao*/
CoordF Ente::getPosicao() const
{
	return posicao;
}

/*Define o tamanho*/
void Ente::setTamanho(CoordF tam)
{
	this->tamanho = tam;
}

/*Pegar o tamanho*/
CoordF Ente::getTamanho() const
{
	return tamanho;
}

/*Pegar X*/
float Ente::getLargura()
{
	return tamanho.getX();
}

/*Pegar Y*/
float Ente::getAltura()
{
	return tamanho.getY();
}

/*Imprime*/
void Ente::imprimir()
{
}
