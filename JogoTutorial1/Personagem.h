#pragma once
#include "Entidade.h"

class Personagem : public Entidade
{
protected:
	int num_vidas;

public:
	Personagem(int num_vidas = 0, CoordF posicao = CoordF(0.0f, 0.0f), CoordF tamanho = CoordF(0.0f, 0.0f), ID id = vazio);
	~Personagem();
};

