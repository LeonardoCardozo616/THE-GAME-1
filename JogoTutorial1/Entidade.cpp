#include "Entidade.h"


Entidade::Entidade(CoordF pos, CoordF tam, ID ind):
Ente(pos, tam),
id(ind),
body(sf::Vector2f(tamanho.getX(), tamanho.getY()))
{
	body.setPosition(posicao.getX() - tamanho.getX() / 2, posicao.getY() - tamanho.getY() / 2);
}

Entidade::~Entidade()
{
}

ID Entidade::getID() const
{
	return id;
}

sf::RectangleShape* Entidade::getBody()
{
	return &body;
}
