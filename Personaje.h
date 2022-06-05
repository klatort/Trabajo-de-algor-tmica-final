#pragma once
#include "Entidad.h"
class Personaje :
    public Entidad
{
    public:

        Personaje();
        ~Personaje();

        void mover();

};