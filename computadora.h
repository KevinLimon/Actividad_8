#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include<iostream>
using namespace std;

class Computadora
{
    string marca;
    string color;
    float precio;
    int memoria;

public:
    Computadora();
    Computadora(const string &marca, const string &color, float precio, int memoria);
};


#endif