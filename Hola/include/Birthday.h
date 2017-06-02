#ifndef BIRTHDAY_H
#define BIRTHDAY_H
#include <iostream>

using namespace std;

class Birthday
{
    private:
        int dia;
        int mes;
        int anio;
    public:
        Birthday();
        Birthday(int d, int m, int a);
        void edad();
};

#endif // BIRTHDAY_H
