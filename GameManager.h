#pragma once

#include"LogicaJuego.h"
#include"Graphics.h"

class GameManager
{
	// Variables de control
	LogicaJuego*	juego;
	Graphics*		pantalla;
	
	public:

		GameManager();
		~GameManager();

		// Funci�n con loop principal del juego
		void init();
};

