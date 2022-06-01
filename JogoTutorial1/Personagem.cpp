#include "Personagem.h"

Personagem::Personagem(int vidas, CoordF pos, CoordF tam, ID ind, const float tmpAtq, const float atqEnc):
EntidadeMovimento(pos, tam, ind),
ataqueEncerrando(atqEnc),
TempoDeAtaque(tmpAtq)
{
	num_vidas = vidas;
	EncerrandoTimer = 0;
	ataqueTimer = 0;
	atacou = false;
	flagEstahAtacando = false;
}

/*Recebe a quantidade de vida que o Personagem tem*/
const int Personagem::getVida() const
{
	return num_vidas;
}

/*O personagem recebe dano*/
void Personagem::recebeDano(const int dn)
{
	num_vidas -= dn;
	if (num_vidas == 0)
		ativo = false;
}

/*Verifica se o Personagem pode atacar nesse instante*/
const bool Personagem::podeAtacar() const
{
	if (EncerrandoTimer > ataqueEncerrando)
		return true;
	else
		return false;
}

/*O personagem ataca*/
void Personagem::atacar()
{
	if (podeAtacar()) {
		flagEstahAtacando = true;
		atacou = false;
	}
}

/*Verifca a duranção do movimento desse ataque*/
void Personagem::aumentaTempoDeAtaque(const float dt)
{
	if (flagEstahAtacando) {
		EncerrandoTimer = 0;
		ataqueTimer += dt;
		if (ataqueTimer > TempoDeAtaque)
			flagEstahAtacando = false;
	}
	else {
		EncerrandoTimer += dt;
		ataqueTimer = 0;
	}
}

/*Verifica se está atacando*/
const bool Personagem::estahAtacando() const
{
	return flagEstahAtacando;
}

/*Recebe dano caso o Personagem esteja atacando*/
unsigned int Personagem::getDano()
{
	if (estahAtacando() && !atacou) {
		atacou = true;
		return dano;
	}
	
	return 0;
}

