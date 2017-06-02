#ifndef PERSONA_H
#define PERSONA_H
#include "Birthday.h"
#include <iostream>
#include <string.h>

using namespace std;

class Persona
{
    protected:
        string nombre;
        Birthday cum;
    public:
        Persona();
        Persona(const string &suNombre, Birthday cal);
        virtual ~Persona();
        virtual string getDat();
        virtual void obtener();
};

#endif // PERSONA_H
