#include "Personagem.h"

Personagem::Personagem(int num_vidas, CoordF posicao, CoordF tamanho, ID id):
Entidade(posicao, tamanho, id)
{
	this->num_vidas = num_vidas;
}

Personagem::~Personagem()
{
}
