#include "Obst_A.h"

Obst_A::Obst_A(CoordF pos, CoordF tam, ID ind) :
Obstaculo(pos, tam, ind)
{
}

Obst_A::~Obst_A()
{
}

/* Parede � fixa, portanto em colisao se mant�m no mesmo local*/
void Obst_A::colisao(Entidade* outraEntidade, CoordF interseccao)
{
}
