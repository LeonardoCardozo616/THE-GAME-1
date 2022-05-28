#include "Jogador.h"

Jogador::Jogador(int num_vidas, CoordF posicao, CoordF tamanho, ID id):
Personagem(num_vidas, posicao, tamanho, id)
{
    body.setFillColor(sf::Color::Yellow);
}

Jogador::~Jogador()
{
}

void Jogador::move()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        body.move(sf::Vector2f(0.1f, 0.f));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        body.move(sf::Vector2f(-0.1f, -0.f));
    }
}
