#include "Entidade.h"

Entidade::Entidade(CoordF posicao, CoordF tamanho, int id):
Ente(id),
body(sf::Vector2f(100.f, 100.f))
{
	this->posicao = posicao;
	this->tamanho = tamanho;
}

Entidade::~Entidade()
{
}

void Entidade::setPosicao(CoordF pos)
{
	this->posicao = pos;
}

CoordF Entidade::getPosicao() const
{
	return posicao;
}

void Entidade::setTamanho(CoordF tam)
{
	this->tamanho = tam;
}

CoordF Entidade::getTamanho() const
{
	return tamanho;
}

sf::RectangleShape* Entidade::getBody()
{
	return &body;
}
