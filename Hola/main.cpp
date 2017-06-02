#include <iostream>
#include "Persona.h"
#include "Conserje.h"
#include "Gerente.h"
#include <string.h>
#include "Birthday.h"
#include <vector>

using namespace std;

int main()
{
    Birthday c1(8, 5, 1998);
    Birthday c2(8, 9, 1995);
    Conserje lel("Juancho", c1, "Toribianitos");
    Gerente lol("Pepe", c2, "Suavitel");
    cout << lel.getDat()<<endl;
    cout <<lol.getDat()<<endl;
    lel.obtener();
    lol.obtener();

    return 0;
}
