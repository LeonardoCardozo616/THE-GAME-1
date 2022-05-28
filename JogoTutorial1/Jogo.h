#pragma once
#include<SFML/Graphics.hpp>
#include"Jogador.h"
#include"Inimigo.h"
#include"ListaEntidades.h"
#include"Fase.h"
#include "Gerenciador_Eventos.h"
class Jogo
{
private:
	Gerenciador_Grafico* GerenciadorGrafico;
	Gerenciador_Eventos* GerenciadorEventos;

	Jogador *player1;
	ListaEntidades* LES;
	//Fase *fase1;

public:
	Jogo();

	~Jogo();

	void executar();
};

