#include "Entidad.h"

Entidad::Entidad() 
{
	x		= new float;
	y		= new float;
	ancho	= new float;
	alto	= new float;
}

Entidad::~Entidad()
{
	delete x, y, ancho, alto;
}