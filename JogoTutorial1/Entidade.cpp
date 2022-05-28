#include "Entidade.h"

Entidade::Entidade(CoordF posicao, CoordF tamanho, ID id):
	Ente(posicao, tamanho),
	id(id),
	body(sf::Vector2f(100.f, 100.f))
{
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
