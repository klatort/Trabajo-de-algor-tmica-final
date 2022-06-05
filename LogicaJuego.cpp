#include "LogicaJuego.h"

LogicaJuego::LogicaJuego()
{
	colaLog = al_create_event_queue();

	al_register_event_source(colaLog, al_get_keyboard_event_source());

	jugador = new Personaje;
}

LogicaJuego::~LogicaJuego()
{
	al_destroy_event_queue(colaLog);
}