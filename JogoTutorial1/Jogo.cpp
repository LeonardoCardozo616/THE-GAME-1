#include "Jogo.h"

Jogo::Jogo() :
GerenciadorGrafico(new Gerenciador_Grafico),
LES(new ListaEntidades()),
GerenciadorEventos(new Gerenciador_Eventos(GerenciadorGrafico)),
player1(new Jogador(0, CoordF((0.f), (0.f)), CoordF((100.f), (100.f)), CoordF((100.f), (100.f)))),
parede(new Plataforma(CoordF(250.f, 250.f)))
{
    LES->adicionarEntidade(parede);
    LES->adicionarEntidade(player1);

    //player1 = new Jogador();
    //fase1 = new Fase(player1, &window);
    //player1->setWindow(&window);
    //LES = fase1->getListaEntidades();

    GerenciadorColisoes = new Gerenciador_Colisoes(LES);

	executar();
}

Jogo::~Jogo()
{
    delete GerenciadorGrafico;
    delete GerenciadorEventos;

    delete LES;
    
    delete player1;
    delete parede;
}

void Jogo::executar()
{
    while (GerenciadorGrafico->isWindowOpen())
    {
        GerenciadorEventos->pollEvents();
        player1->move();
        GerenciadorGrafico->clearWindow();
        GerenciadorColisoes->checkColisoes();
        GerenciadorGrafico->render(player1->getBody());
        GerenciadorGrafico->render(parede->getBody());
        GerenciadorGrafico->display();
    }
}
