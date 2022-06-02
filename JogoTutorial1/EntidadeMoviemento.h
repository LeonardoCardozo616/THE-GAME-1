#pragma once
#include "Entidade.h"
#include "AnimacaoMovimento.h"

class EntidadeMovimento :
    public Entidade
{
protected:
    CoordF velocidade;
    bool ativo;
    bool AEsquerda;
    unsigned int dano;

    AnimacaoMovimento sprite;
public:
    EntidadeMovimento(CoordF pos = CoordF(0.0f, 0.0f), CoordF tam = CoordF(0.0f, 0.0f), ID ind = ID::vazio, CoordF vel = CoordF(0.0f, 0.0f));
    ~EntidadeMovimento() { }
    //virtual void render();

    //virtual void update(const float dt) = 0;
    //virtual void initialize() = 0;
    //virtual void collide(Entidade* outraEntidade, CoordF intersecta) = 0;
    //virtual void updateSprite(const float dt) = 0;

    void setAEsquerda(const bool Esq);
    void setAEsquerda();
    const bool estahAEsquerda();
    const bool estahAtivo() const;
    void setVelocidade(CoordF vel);
    CoordF getVelocidade() const;
    void setDano(unsigned int dn);
    virtual unsigned int getDano();
    void indoEmColisao(Entidade* outraEntidade, CoordF intersecta);

};

