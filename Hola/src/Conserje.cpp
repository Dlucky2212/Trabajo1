#include "Conserje.h"
#include "Persona.h"
#include "Birthday.h"
#include <string.h>
#include <iostream>

using namespace std;

Conserje::Conserje()
{
}
Conserje::Conserje(const string &suNombre, Birthday cal, const string &laInstitu)
{
    nombre = suNombre;
    cum = cal;
    institu = laInstitu;
}

Conserje::~Conserje()
{
}
string Conserje:: getDat()
{
    return nombre + " " + institu;
}
void Conserje::obtener()
{
    cout << nombre<<endl;
    cum.edad();
}
