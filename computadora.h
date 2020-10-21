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
    void setMarca(const string &valor);
    string getMarca();
    void setColor(const string &valor);
    string getColor();
    void setPrecio(float valor);
    float getPrecio();
    void setMemoria(int valor);
    int getMemoria();

    friend ostream& operator<<(ostream &out, const Computadora &c)
    {
        out << c.marca <<endl;
        out << c.color <<endl;
        out << c.precio <<endl;
        out << c.memoria <<endl;
        return out;
    }
};


#endif