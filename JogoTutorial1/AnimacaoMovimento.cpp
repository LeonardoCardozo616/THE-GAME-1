#include "AnimacaoMovimento.h"

AnimacaoMovimento::AnimacaoMovimento():
mapaAnimacao(),
atualAnimacao(Animacao_ID::parado),
body(),
pGerenGrafico()
{
}

/*Destrói o mapa de Animação*/
AnimacaoMovimento::~AnimacaoMovimento()
{
	map<Animacao_ID, AnimacaoIndividual*>::iterator it;
	for (it = mapaAnimacao.begin(); it != mapaAnimacao.end(); ++it) {
		delete (it->second);
	}
	mapaAnimacao.clear();
}

/*Adiciona um novo frame para o objeto*/
void AnimacaoMovimento::adicionarNovaAnimacao(Animacao_ID ind, const char* path, unsigned int contImag, const float st)
{
	AnimacaoIndividual* tmp = new AnimacaoIndividual(path, contImag, st);

	if (tmp == nullptr) {
		cout << "ERRO! Problemas em adicionar uma nova animacao nas animacoes em movimento." << endl;
		exit(1);
	}

	mapaAnimacao.insert(pair<Animacao_ID, AnimacaoIndividual*>(ind, tmp));

	IntRect rectSize = tmp->getSize();

	body.setSize(Vector2f(rectSize.width, rectSize.height));
	body.setOrigin(Vector2f(rectSize.width, rectSize.height) / 2.0f);
}

/*Atualiza o frame do objeto*/
void AnimacaoMovimento::update(Animacao_ID ind, bool AEsquerda, CoordF pos, const float dt)
{
	if (atualAnimacao != ind) {
		atualAnimacao = ind;
		mapaAnimacao[atualAnimacao]->reset();
	}

	mapaAnimacao[atualAnimacao]->update(dt, AEsquerda);

	body.setPosition(Vector2f(pos.getX(), pos.getY()));
	body.setTextureRect(mapaAnimacao[atualAnimacao]->getSize());
	body.setTexture(mapaAnimacao[atualAnimacao]->getTextura());
}

/*Renderiza a Animação*/
void AnimacaoMovimento::render()
{
	pGerenGrafico->render(&body);
}
