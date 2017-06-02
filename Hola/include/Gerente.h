#ifndef GERENTE_H
#define GERENTE_H
#include "Persona.h"
#include <string.h>
#include <iostream>

using namespace std;

class Gerente : public Persona
{
    public:
        string empre;
        Gerente();
        Gerente(const string &suNombre, Birthday cal, const string &laEmpre);
        ~Gerente();
        string getDat();
        void obtener();
};

#endif // GERENTE_H
