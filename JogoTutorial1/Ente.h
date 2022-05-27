#pragma once
#include "CoordenadaTL.h"

class Ente
{
protected:
	int id;

public:
	Ente(int id = -1);
	~Ente();

	void setId(int id);
	int getId() const;
	//virtual void render() = 0;
	//virtual void update(const float dt) = 0;
	//virtual void inicializa() = 0;
};

