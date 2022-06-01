#include "Entidade.h"

/*Construtora
Inicializa a entidade na posi��o informada no canto superior esquerdo*/
Entidade::Entidade(CoordF pos, CoordF tam, ID ind):
Ente(pos, tam),
id(ind),
body(sf::Vector2f(tamanho.getX(), tamanho.getY())),
proximaPosicao(pos)
{
	//body.setPosition(posicao.getX() - tamanho.getX() / 2, posicao.getY() - tamanho.getY() / 2);
	body.setPosition(posicao.getX(), posicao.getY());
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


CoordF Entidade::getProximaPosicao()
{
	return proximaPosicao;
}
