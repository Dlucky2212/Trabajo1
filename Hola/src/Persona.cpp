#include "Persona.h"
#include <iostream>
#include <string.h>

using namespace std;


Persona::Persona(const string &suNombre, Birthday cal)
{
    nombre = suNombre;
    cum = cal;
}

Persona::Persona()
{
}

Persona::~Persona()
{
}
string Persona::getDat(){
    return nombre;
}
void Persona ::obtener()
{
    cout << nombre <<endl;
    cum.edad();
}
