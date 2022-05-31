#pragma once
#include "EntidadeEstatica.h"

#define PLATAFORMA_ALTURA 192.f
#define PLATAFORMA_LARGURA 192.f

class Plataforma :
    public EntidadeEstatica
{
public:
    Plataforma(CoordF posicao = CoordF(0.f, 0.f));
    ~Plataforma();

    void update(const float dt);
    void inicializa();
    void colisao(Entidade* outraEntidade, CoordF inteccao);
};
