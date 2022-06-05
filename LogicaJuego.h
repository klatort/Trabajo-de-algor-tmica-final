#pragma once
#include<iostream>
#include<allegro5/allegro5.h>
#include<allegro5/allegro_font.h>

#include"Personaje.h"

class LogicaJuego
{

	ALLEGRO_EVENT_QUEUE* colaLog;

	Personaje* jugador;

	public:
		LogicaJuego();
		~LogicaJuego();
		//ALLEGRO_EVENT_QUEUE* get_cola() { return colaLog; }
};