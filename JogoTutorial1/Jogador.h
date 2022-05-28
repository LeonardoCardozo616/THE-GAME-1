#pragma once

#include "Personagem.h"

class Jogador : public Personagem
{
private:
    // Nada ainda
public:
    Jogador(int num_vidas = 0, CoordF posicao = CoordF(0.0f, 0.0f), CoordF tamanho = CoordF(0.0f, 0.0f), int id = -1);
    ~Jogador();
    void move();
};

