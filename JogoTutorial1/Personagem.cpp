#include "Personagem.h"

Personagem::Personagem(int vidas, CoordF vel, CoordF pos, CoordF tam, ID ind):
Entidade(pos, tam, ind),
num_vidas(vidas),
velocidade(vel)
{
}

Personagem::~Personagem()
{
}
