#pragma once
#include<SFML/Graphics.hpp>
#include"Ente.h"
class Entidade : public Ente
{
protected:
	CoordF posicao;
	CoordF tamanho;
	sf::RectangleShape body;
	//sf::RenderWindow *window;

public:
	Entidade(CoordF posicao = CoordF(0.0f, 0.0f), CoordF tamanho = CoordF(0.0f, 0.0f), int id = -1);
	~Entidade();

	void setPosicao(CoordF pos);
	CoordF getPosicao() const;
	void setTamanho(CoordF tam);
	CoordF getTamanho() const;

	sf::RectangleShape* getBody();
	//void setWindow(sf::RenderWindow* w) { this->window = w; }
	//void draw() { window->draw(body); }
};

