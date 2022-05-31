#pragma once
#include "Entidade.h"

class Personagem : public Entidade
{
protected:
	int num_vidas;
	Coordenada<float> velocidade;

public:
	Personagem(int vidas = 0, CoordF vel = CoordF(0.0f, 0.0f), CoordF pos = CoordF(0.0f, 0.0f), CoordF tam = CoordF(0.0f, 0.0f), ID ind = vazio);
	~Personagem();

	virtual void colisao(Entidade* outraEntidade, CoordF interseccao) = 0;
};

