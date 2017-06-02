#include "Birthday.h"
#include <stdlib.h>
Birthday::Birthday()
{
}

Birthday::Birthday(int d, int m, int a)
{
    dia = d;
    mes = m;
    anio = a;
}
void Birthday::edad()
{
    cout << abs(anio - 2017)<< " Anios con "<< abs(mes - 6) << " Meses con "<< abs(dia - 4) <<" Dias."<< endl;
}
