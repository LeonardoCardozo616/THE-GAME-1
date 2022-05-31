#include "Jogador.h"
//#include <iostream>

#define velMov 0.3f

Jogador::Jogador(int vidas, CoordF vel, CoordF pos, CoordF tam, ID ind):
Personagem(vidas, vel, pos, tam, ind)
{
    body.setFillColor(sf::Color::Yellow);
}

Jogador::~Jogador()
{
}

void Jogador::colisao(Entidade* outraEntidade, CoordF interseccao)
{
    //std::cout << "x: " << interseccao.getX() << " y: " << interseccao.getY() << std::endl;
    /*
    if (chaBounds.left < wallBounds.left
        && chaBounds.left + chaBounds.width < wallBounds.left + wallBounds.width
        && chaBounds.top < wallBounds.top + wallBounds.height
        && chaBounds.top + chaBounds.height > wallBounds.top)
    */

}

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

    posicao.atualizarX(velocidade.getX());
    posicao.atualizarY(velocidade.getY());

    //std::cout << "x: " << posicao.getX() << " y: " << posicao.getY() << std::endl;

    body.move(sf::Vector2f(velocidade.getX(), velocidade.getY()));
}
