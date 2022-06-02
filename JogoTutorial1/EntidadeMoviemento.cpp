#include "EntidadeMoviemento.h"

/*Construtora*/
EntidadeMovimento::EntidadeMovimento(CoordF pos, CoordF tam, ID ind, CoordF vel):
	Entidade(pos, tam, ind),
	sprite()
{
	ativo = true;
	velocidade = vel;
	AEsquerda = false;
	dano = 0;
}

/*Define se o personagem está à direita ou à esquerda*/
void EntidadeMovimento::setAEsquerda(const bool Esq)
{
	AEsquerda = Esq;
}

/*Define se o personagem está à direita ou à esquerda através do valor velocidade*/
void EntidadeMovimento::setAEsquerda()
{
	if (velocidade.getX() >= 0.0f)
		AEsquerda = false;
	else
		AEsquerda = true;
}

/*Retorna AEsquerda*/
const bool EntidadeMovimento::estahAEsquerda()
{
	return AEsquerda;
}

/*Retorna ativo*/
const bool EntidadeMovimento::estahAtivo() const
{
	return ativo;
}

/*Define o valor da velocidade*/
void EntidadeMovimento::setVelocidade(CoordF vel)
{
	velocidade = vel;
}

/*Retorna velocidade*/
CoordF EntidadeMovimento::getVelocidade() const
{
	return CoordF(velocidade);
}

/*Define o valor do dano*/
void EntidadeMovimento::setDano(unsigned int dn)
{
	dano = dn;
}

/*Retorna dano*/
unsigned int EntidadeMovimento::getDano()
{
	return dano;
}

/*Verifica se haverá alguma colisão entre duas entidades*/
void EntidadeMovimento::indoEmColisao(Entidade* outraEntidade, CoordF intersecta)
{
	CoordF outraPos = outraEntidade->getPosicao();

	if (intersecta.getX() > intersecta.getY()) { // Colisão em x
		if (posicao.getX() > outraPos.getX())
			posicao.atualizarX(intersecta.getX());
		else
			posicao.atualizarXNegativo(intersecta.getX());
		velocidade.setX(0.0f);
	}
	else { // Colisão em y
		if (posicao.getY() > outraPos.getY())
			posicao.atualizarY(intersecta.getY());
		else
			posicao.atualizarYNegativo(intersecta.getY());
		velocidade.setY(0.0f);
	}
}
