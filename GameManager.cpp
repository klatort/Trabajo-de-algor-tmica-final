#include "GameManager.h"

GameManager::GameManager()
{
	al_init();
	al_install_keyboard();

	pantalla = new Graphics;
	juego = new LogicaJuego;
}

GameManager::~GameManager()
{
	delete pantalla;
	delete juego;
}


void GameManager::init()
{
	ALLEGRO_EVENT evento;

	while (true) {

		pantalla->mostrar(evento);

		if (evento.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
			break;
	}
}