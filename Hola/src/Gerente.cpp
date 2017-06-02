#include "Gerente.h"
#include "Persona.h"
#include "Birthday.h"
#include <iostream>
#include <string.h>

using namespace std;

Gerente::Gerente()
{
}
Gerente::Gerente(const string &suNombre, Birthday cal, const string &laEmpre)
{
    nombre = suNombre;
    cum = cal;
    empre = laEmpre;
}
Gerente::~Gerente()
{
}
string Gerente::getDat()
{
    return nombre + " " + empre;
}
void Gerente::obtener()
{
    cout << nombre << endl;
    cum.edad();
}
