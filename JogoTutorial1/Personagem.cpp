#include "Personagem.h"

Personagem::Personagem(int vidas, CoordF vel, CoordF pos, CoordF tam, ID ind):
Entidade(pos, tam, ind),
num_vidas(vidas),
velocidade(vel)
{
}

Personagem::~Personagem()
{
}

void Personagem::atualizarPos()
{
    posicao += velocidade;
    body.move(sf::Vector2f(velocidade.getX(), velocidade.getY()));
}

/* Função reposiciona entidade de acordo com colisão com outra entidade */
void Personagem::reposicionarColisao(CoordF posEntidade2, CoordF tamEntidade2, CoordF interseccao)
{
    // Colisão pela direita
    if (posicao.getX() < posEntidade2.getX()
        && posicao.getX() + tamanho.getX() < posEntidade2.getX() + tamEntidade2.getX()
        && posicao.getY() < posEntidade2.getY() + tamEntidade2.getY()
        && posicao.getY() + tamanho.getY() > posEntidade2.getY()
        )
    {
        velocidade.setX(0.f);
    }
    // Colisão pela esquerda
    else if (posicao.getX() > posEntidade2.getX()
        && posicao.getX() + tamanho.getX() > posEntidade2.getX() + tamEntidade2.getX()
        && posicao.getY() < posEntidade2.getY() + tamEntidade2.getY()
        && posicao.getY() + tamanho.getY() > posEntidade2.getY()
        )
    {
        velocidade.setX(0.f);
    }
    // Colisão por baixo
    else if (posicao.getY() < posEntidade2.getY()
        && posicao.getY() + tamanho.getY() < posEntidade2.getY() + tamEntidade2.getY()
        && posicao.getX() < posEntidade2.getX() + tamEntidade2.getX()
        && posicao.getX() + tamanho.getX() > posEntidade2.getX()
        )
    {
        velocidade.setY(0.f);
    }
    // Colisão por cima
    else if (posicao.getY() > posEntidade2.getY()
        && posicao.getY() + tamanho.getY() > posEntidade2.getY() + tamEntidade2.getY()
        && posicao.getX() < posEntidade2.getX() + tamEntidade2.getX()
        && posicao.getX() + tamanho.getX() > posEntidade2.getX()
        )
    {
        velocidade.setY(0.f);
    }
}
