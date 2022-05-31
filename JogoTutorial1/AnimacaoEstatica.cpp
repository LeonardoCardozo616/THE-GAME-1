#include "AnimacaoEstatica.h"

Gerenciador_Grafico* AnimacaoEstatica::pGerenGrafico = Gerenciador_Grafico::getInstancia();

AnimacaoEstatica::AnimacaoEstatica() :
	body(),
	textura(nullptr)
{
}

AnimacaoEstatica::~AnimacaoEstatica()
{
}

void AnimacaoEstatica::inicializa(const char* path, CoordF posicao, CoordF tamanho)
{
	textura = pGerenGrafico->loadTextura(path);

	body.setPosition(Vector2f(posicao.getX(), posicao.getY()));
	body.setSize(Vector2f(tamanho.getX(), tamanho.getY()));
	//body.setScale(escala, escala);
	body.setTexture(textura);
}

void AnimacaoEstatica::update(CoordF posicao)
{
	body.setPosition(Vector2f(posicao.getX(), posicao.getY()));
}

void AnimacaoEstatica::render()
{
	pGerenGrafico->render(&body);
}
