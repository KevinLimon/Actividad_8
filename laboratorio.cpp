#include "laboratorio.h"

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarFinal(const Computadora &c)
{
    if (cont<5)
    {
        arreglo[cont] = c;
        cont++;
    }
    else{
        cout<<"El arreglo esta lleno"<<endl;
    }
}

void Laboratorio::mostrar()
{
    for(size_t i=0;i<cont;i++){
        Computadora &c = arreglo[i];
        cout << c;
        //cout<<"Marca: "<<c.getMarca()<<endl;
        //cout<<"Color: "<<c.getColor()<<endl;
        //cout<<"Precio: "<<c.getPrecio()<<endl;
        //cout<<"Memoria: "<<c.getMemoria()<<endl;
        //cout<<endl;
    }
}