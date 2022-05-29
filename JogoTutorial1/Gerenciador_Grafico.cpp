#include "Gerenciador_Grafico.h"
#include <cstring>
#include <iostream>

#define LARGURA 1280
#define ALTURA 720

Gerenciador_Grafico* Gerenciador_Grafico::instancia = nullptr;


Gerenciador_Grafico::Gerenciador_Grafico() :
Window(new sf::RenderWindow(sf::VideoMode(LARGURA, ALTURA), "Jogo", sf::Style::Titlebar | sf::Style::Close)),
mapaTextura()
{

}

Gerenciador_Grafico::~Gerenciador_Grafico()
{
	for (map<const char*, Texture*>::iterator it = mapaTextura.begin(); it != mapaTextura.end(); ++it) {
		delete (it->second);
	}
	
	delete Window;
}

//Instancia inicia a construtora de gerenciamento gráfico
Gerenciador_Grafico* Gerenciador_Grafico::getInstancia()
{
	if (instancia == nullptr) {
		instancia = new Gerenciador_Grafico();
	}

	return instancia;
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

sf::Texture* Gerenciador_Grafico::loadTextura(const char* path)
{
	map<const char*, Texture*>::iterator it;
	for (it = mapaTextura.begin(); it != mapaTextura.end(); ++it) {
		if (!strcmp(it->first, path))
			return it->second;
	}

	Texture* tex = new Texture();

	if (!tex->loadFromFile(path)) {
		std::cout << "ERRO! houve falha ao carregar arquivo!" << std::endl;
		exit(1);
	}
	
	mapaTextura.insert(std::pair<const char*, Texture*>(path, tex));

	return tex;
}
