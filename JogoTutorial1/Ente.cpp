#include "Ente.h"

Ente::Ente(int id):
id(id)
{
}

Ente::~Ente()
{
}

void Ente::setId(int id)
{
	this->id = id;
}

int Ente::getId() const
{
	return id;
}
