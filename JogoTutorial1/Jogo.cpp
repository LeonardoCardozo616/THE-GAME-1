#include "Jogo.h"

Jogo::Jogo() :
GerenciadorGrafico(new Gerenciador_Grafico),
LES(new ListaEntidades()),
GerenciadorEventos(new Gerenciador_Eventos(GerenciadorGrafico)),
player1(new Jogador(0, CoordF((0.f), (0.f)), CoordF((100.f), (100.f)), CoordF((100.f), (100.f)))),
parede(new Obst_A(CoordF(250.f, 250.f), CoordF((100.f), (100.f)))),
parede1(new Obst_A(CoordF(500.f, 500.f), CoordF((100.f), (100.f))))
{
    LES->adicionarEntidade(player1);
    LES->adicionarEntidade(parede);
    LES->adicionarEntidade(parede1);

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
    delete parede1;
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
        GerenciadorGrafico->render(parede1->getBody());
        GerenciadorGrafico->display();
    }
}
