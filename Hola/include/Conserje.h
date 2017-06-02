#ifndef CONSERJE_H
#define CONSERJE_H
#include "Persona.h"
#include <string.h>
#include <iostream>

using namespace std;

class Conserje : public Persona
{
    public:
        string institu;
        Conserje();
        Conserje(const string &suNombre, Birthday cal, const string &laInstitu);
        ~Conserje();
        string getDat();
        void obtener();
};

#endif // CONSERJE_H
