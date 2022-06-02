#pragma once
#include "Gerenciador_Grafico.h"
#include "AnimacaoIndividual.h"

enum Animacao_ID {
	parado = 0,
	andar,
	pular,
	atacar
};

class AnimacaoMovimento
{
private:
	map<Animacao_ID, AnimacaoIndividual*> mapaAnimacao;
	Animacao_ID atualAnimacao;
	RectangleShape body;
	Gerenciador_Grafico* pGerenGrafico;

public:
	AnimacaoMovimento();
	~AnimacaoMovimento();
	
	void adicionarNovaAnimacao(Animacao_ID ind, const char* path, unsigned int contImag, const float st = 0.2f);
	void update(Animacao_ID ind, bool AEsquerda, CoordF pos, const float dt);
	void render();
};

