#include "AnimacaoEstatica.h"


AnimacaoEstatica::AnimacaoEstatica() :
body(),
textura(nullptr),
pGerenGrafico()
{
}

AnimacaoEstatica::~AnimacaoEstatica()
{
}

/*Cria a textura do objeto e define sua posição e tamanho*/
void AnimacaoEstatica::inicializa(const char* path, CoordF posicao, CoordF tamanho)
{
	textura = pGerenGrafico->loadTextura(path);

	body.setPosition(Vector2f(posicao.getX(), posicao.getY()));
	body.setSize(Vector2f(tamanho.getX(), tamanho.getY()));
	//body.setScale(escala, escala);
	body.setTexture(textura);
}

/*Atualiza a posição*/
void AnimacaoEstatica::update(CoordF posicao)
{
	body.setPosition(Vector2f(posicao.getX(), posicao.getY()));
}

/*Renderiza o gerenciador gráfico*/
void AnimacaoEstatica::render()
{
	pGerenGrafico->render(&body);
}
