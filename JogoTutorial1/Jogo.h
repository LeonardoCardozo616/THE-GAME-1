#pragma once
#include<SFML/Graphics.hpp>
#include"Jogador.h"
#include"Inimigo.h"
#include"ListaEntidades.h"
#include"Fase.h"
#include "Gerenciador_Grafico.h"
class Jogo
{
private:
	Gerenciador_Grafico GerenciadorGrafico;
	sf::RenderWindow window;
	Jogador *player1;
	ListaEntidades* LES;
	Fase *fase1;
public:
	Jogo();

	~Jogo();

	void executar();
};

