#include "Graphics.h"


// Constructor de los gráficos
Graphics::Graphics()
{
	timer = al_create_timer(1.0 / 60.0);
	disp = al_create_display(800, 600);
	font = al_create_builtin_font();
	colaDisp = al_create_event_queue();

	al_register_event_source(colaDisp, al_get_display_event_source(disp));
	al_register_event_source(colaDisp, al_get_timer_event_source(timer));

	al_start_timer(timer);

	redraw = true;
}


// Destructor de los gráficos
Graphics::~Graphics()
{
	al_destroy_font(font);
	al_destroy_display(disp);
	al_destroy_timer(timer);
	al_destroy_event_queue(colaDisp);
}


// Función para mostrar (actualmente en prueba)
void Graphics::mostrar(ALLEGRO_EVENT &evento)
{
	// Esperando a un evento
	al_wait_for_event(colaDisp, &evento);

	// Si el evento coincide con el evento de timer dentro de esta clase
	if (evento.type == ALLEGRO_EVENT_TIMER)
		redraw = true;

	if (redraw && al_is_event_queue_empty(colaDisp))
	{
		// Se dibuja en el buffer un fondo negro
		al_clear_to_color(al_map_rgb(0, 0, 0));
		// Se dibuja en el buffer un texto blanco empezando en la coordenada 
		// x = 0; y = 0 con el mensaje "Hello world!"
		al_draw_text(font, al_map_rgb(255, 255, 255), 0, 0, 0, "Hello world!");
		// Mostrar lo que se ha guardado en el buffer
		al_flip_display();

		redraw = false;
	}

}