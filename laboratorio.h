#ifndef LABORATIORIO_H
#define LABORATIORIO_H
#include "computadora.h"

class Laboratorio
{
    Computadora arreglo[5];
    size_t cont;
public:
    Laboratorio();
    void agregarFinal(const Computadora &c);
    void mostrar();
};


#endif