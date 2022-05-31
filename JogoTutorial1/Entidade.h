#pragma once
#include<SFML/Graphics.hpp>
#include"Ente.h"
#include<math.h>

enum ID {
	vazio = 0,
	jogador,
	obst_A,
	obst_B,
	obst_C,
	inimigo_A,
	inimigo_B,
	inimigo_C
};

class Entidade : public Ente
{
protected:
	ID id;
	sf::RectangleShape body;
	//sf::RenderWindow *window;

public:
	Entidade(CoordF pos = CoordF(0.0f, 0.0f), CoordF tam = CoordF(0.0f, 0.0f), ID ind = vazio);
	~Entidade();
	ID getID() const;
	//virtual void render() = 0;
	//virtual void update(const float dt) = 0;
	//virtual void inicializa() = 0;
	virtual void colisao(Entidade* outraEntidade, CoordF interseccao) = 0;

	sf::RectangleShape* getBody();
	//void setWindow(sf::RenderWindow* w) { this->window = w; }
	//void draw() { window->draw(body); }
};

