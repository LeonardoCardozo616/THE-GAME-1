#pragma once
#include<SFML/Graphics.hpp>
#include"Ente.h"
#include<math.h>

enum  ID {
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
	Entidade(CoordF posicao = CoordF(0.0f, 0.0f), CoordF tamanho = CoordF(0.0f, 0.0f), ID id = vazio); 
	~Entidade();
	ID getID() const;
	//virtual void render() = 0;
	//virtual void update(const float dt) = 0;
	//virtual void inicializa() = 0;
	//virtual void colisao(Entidade outraEntidade, CoordF intereccao) = 0;

	void setPosicao(CoordF pos);
	CoordF getPosicao() const;
	void setTamanho(CoordF tam);
	CoordF getTamanho() const;

	sf::RectangleShape* getBody();
	//void setWindow(sf::RenderWindow* w) { this->window = w; }
	//void draw() { window->draw(body); }
};

