#pragma once
#include "EntidadeMoviemento.h"

class Personagem : public EntidadeMovimento
{
protected:
	int num_vidas;
	bool flagEstahAtacando;
	const float ataqueEncerrando;
	const float TempoDeAtaque;
	float ataqueTimer;
	float EncerrandoTimer;
	bool atacou;
	//Coordenada<float> velocidade;

public:
	Personagem(int vidas = 0, CoordF pos = CoordF(0.0f, 0.0f), CoordF tam = CoordF(0.0f, 0.0f), ID ind = ID::vazio, const float tmpAtq = 0.0f, const float atqEnc = 0.0f);
	~Personagem() {}

	//virtual void update(const float dt) = 0;
	//virtual void initialize() = 0;
	//virtual void collide(Entidade* outraEntidade, CoordF intersecta) = 0;
	//virtual void updateSprite(const float dt) = 0;

	const int getVida() const;
	void recebeDano(const int dn);
	const bool podeAtacar() const;
	void atacar();
	void aumentaTempoDeAtaque(const float dt);
	const bool estahAtacando() const;
	unsigned int getDano();

	virtual void colisao(Entidade* outraEntidade, CoordF interseccao) = 0;
};

