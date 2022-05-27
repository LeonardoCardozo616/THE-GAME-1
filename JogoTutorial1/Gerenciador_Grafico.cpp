#include "Gerenciador_Grafico.h"

#define LARGURA 1280
#define ALTURA 720

Gerenciador_Grafico::Gerenciador_Grafico() :
Window(new sf::RenderWindow(sf::VideoMode(LARGURA, ALTURA), "Jogo", sf::Style::Titlebar | sf::Style::Close))
{

}

Gerenciador_Grafico::~Gerenciador_Grafico()
{
	delete Window;
}

sf::RenderWindow* Gerenciador_Grafico::getWindow() const
{
	return Window;
}

bool Gerenciador_Grafico::isWindowOpen()
{
	return Window->isOpen();
}

void Gerenciador_Grafico::clearWindow()
{
	Window->clear();
}

void Gerenciador_Grafico::render(sf::RectangleShape* body)
{
	Window->draw(*body);
}

void Gerenciador_Grafico::display()
{
	if (isWindowOpen())
	{
		Window->display();
	}
}

void Gerenciador_Grafico::closeWindow()
{
	Window->close();
}
