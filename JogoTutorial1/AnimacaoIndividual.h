#pragma once
#include "Gerenciador_Grafico.h"
#include <SFML/Graphics.hpp>
using namespace sf;

class AnimacaoIndividual
{
private:
	const unsigned int contadorImagem;
	unsigned int imagemAtual;
	Texture* textura;
	float tempoTotal;
	IntRect RectSize;
	const float switchTime;
public:
	AnimacaoIndividual(const char* path, const unsigned int contImag, const float st);
	~AnimacaoIndividual() {}

	void update(const float dt, bool AEsquerda);
	void reset();
	IntRect getSize() const;
	Texture* getTextura() const;
};

