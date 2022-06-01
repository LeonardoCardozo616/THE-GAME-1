#include "Jogador.h"
//#include <iostream>

#define velMov 0.5f

Jogador::Jogador(int vidas, CoordF vel, CoordF pos, CoordF tam, ID ind):
Personagem(vidas, vel, pos, tam, ind)
{
    body.setFillColor(sf::Color::Yellow);
}

Jogador::~Jogador()
{
}

void Jogador::colisao(Entidade* Entidade2, CoordF interseccao)
{
    reposicionarColisao(Entidade2->getPosicao(), Entidade2->getTamanho(), interseccao);
}

/* Coleta input do teclado e atualiza a posição futura do jogador*/
void Jogador::move()
{
    velocidade *= 0;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        velocidade.atualizarX(velMov);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        velocidade.atualizarX(-velMov);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        velocidade.atualizarY(velMov);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        velocidade.atualizarY(-velMov);
    }

    proximaPosicao = posicao + velocidade;

    //std::cout << "x: " << posicao.getX() << " y: " << posicao.getY() << std::endl;
}
