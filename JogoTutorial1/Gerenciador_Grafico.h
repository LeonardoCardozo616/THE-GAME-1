#pragma once

#include<SFML/Graphics.hpp>

class Gerenciador_Grafico
{
private:
	sf::RenderWindow* window;
	//sf::View view;

public:
	Gerenciador_Grafico();
	~Gerenciador_Grafico();

	sf::RenderWindow* getWindow() const;
	bool isWindowOpen();

	void clearWindow();
	void render(sf::RectangleShape* body);
	void display();
	void closeWindow();
};
