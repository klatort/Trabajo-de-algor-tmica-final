#pragma once
#include <allegro5/allegro5.h>
#include <allegro5/allegro_font.h>

class Graphics
{
	// Variables del allegro
	ALLEGRO_TIMER*			timer;
	ALLEGRO_EVENT_QUEUE*	colaDisp;
	ALLEGRO_DISPLAY*		disp;
	ALLEGRO_FONT*			font;

	// Ancho y alto de la ventana para poder mostrar
	// correctamente imágenes en relación al tamaño
	// de la pantalla
	int*	altoPan;
	int*	anchoPan;

	bool redraw;

	public:

		Graphics();
		~Graphics();
		

		void mostrar(ALLEGRO_EVENT &evento);

};