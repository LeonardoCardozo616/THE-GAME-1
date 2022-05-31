#include "Obst_A.h"

#define PLATAFORMA_PATH "Sonic_the_Hedgehog_Plataform.png"

Plataforma::Plataforma(CoordF posicao):
EntidadeEstatica(posicao, CoordF(PLATAFORMA_LARGURA, PLATAFORMA_ALTURA), ID::obst_A)
{
	inicializa();
}

Plataforma::~Plataforma()
{
}

void Plataforma::update(const float dt)
{
	sprite.update(posicao);
}

void Plataforma::inicializa()
{
	sprite.inicializa(PLATAFORMA_PATH, posicao, tamanho);
}

void Plataforma::colisao(Entidade* outraEntidade, CoordF inteccao)
{

}
