#pragma once
#include "CoordenadaTL.h"

class Ente
{
protected:
	CoordF posicao;
	CoordF tamanho;
public:
	Ente(CoordF posicao = CoordF(0.0f, 0.0f) ,	CoordF tamanho = CoordF(0.0f, 0.0f));
	~Ente();
	void setPosicao(CoordF pos);
	CoordF getPosicao() const;
	void setTamanho(CoordF tam);
	CoordF getTamanho() const;
	//virtual void render() = 0;
	//virtual void update(const float dt) = 0;
	//virtual void inicializa() = 0;
	void executar() {};
	void imprimir();
};

