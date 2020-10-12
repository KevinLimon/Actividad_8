#include "computadora.h"

Computadora::Computadora()
{

}

Computadora::Computadora(const string &marca, const string &color, float precio, int memoria)
{ 
    this->marca = marca;
    this->color = color;
    this->precio = precio;
    this->memoria = memoria;
}