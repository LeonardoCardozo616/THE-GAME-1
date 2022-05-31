#pragma once
#include<SFML/Graphics.hpp>
#include"Jogador.h"
#include"Inimigo.h"
#include"ListaEntidades.h"
#include"Fase.h"
#include "Gerenciador_Eventos.h"
#include "Gerenciador_Colisoes.h"
#include "Obst_A.h"

class Jogo
{
private:
	Gerenciador_Grafico* GerenciadorGrafico;
	Gerenciador_Eventos* GerenciadorEventos;
	Gerenciador_Colisoes* GerenciadorColisoes;

	Plataforma *parede;
	Jogador *player1;
	ListaEntidades* LES;

public:
	Jogo();

	~Jogo();

	void executar();
};

