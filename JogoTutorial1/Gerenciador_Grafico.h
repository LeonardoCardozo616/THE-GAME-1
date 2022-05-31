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
	
public:
	Gerenciador_Grafico();
	~Gerenciador_Grafico();

	sf::RenderWindow* getWindow() const;
	bool isWindowOpen();
	void clearWindow();
	void render(sf::RectangleShape* body);
	void display();
	void closeWindow();
	sf::Texture* loadTextura(const char* path);
};
