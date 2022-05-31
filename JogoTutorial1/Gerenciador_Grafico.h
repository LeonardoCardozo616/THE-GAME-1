#pragma once

#include<SFML/Graphics.hpp>
using namespace sf;
#include"CoordenadaTL.h"
#include <map>
using namespace std;

class Gerenciador_Grafico
{
private:
	sf::RenderWindow* Window;
	//sf::View view;
	map<const char*, Texture*> mapaTextura;
	static Gerenciador_Grafico* instancia;

	// Padrão de projeto Singleton
	//Gerenciador_Grafico();

public:
	Gerenciador_Grafico();
	~Gerenciador_Grafico();
	static Gerenciador_Grafico* getInstancia();

	sf::RenderWindow* getWindow() const;
	bool isWindowOpen();

	void clearWindow();
	void render(sf::RectangleShape* body);
	void display();
	void closeWindow();
	sf::Texture* loadTextura(const char* path);
};
