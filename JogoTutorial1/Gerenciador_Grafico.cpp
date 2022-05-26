#include "Gerenciador_Grafico.h"

#define LARGURA 1280
#define ALTURA 720

Gerenciador_Grafico::Gerenciador_Grafico() :
window(new sf::RenderWindow(sf::VideoMode(LARGURA, ALTURA), "Jogo", sf::Style::Titlebar | sf::Style::Close))
{

}

Gerenciador_Grafico::~Gerenciador_Grafico()
{
	delete window;
}

sf::RenderWindow* Gerenciador_Grafico::getWindow() const
{
	return window;
}

bool Gerenciador_Grafico::isWindowOpen()
{
	return window->isOpen();
}

void Gerenciador_Grafico::clearWindow()
{
	window->clear();
}

void Gerenciador_Grafico::render(sf::RectangleShape* body)
{
	window->draw(*body);
}

void Gerenciador_Grafico::display()
{
	if (isWindowOpen())
	{
		window->display();
	}
}

void Gerenciador_Grafico::closeWindow()
{
	window->close();
}
