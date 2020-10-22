#include "laboratorio.h"
#include <fstream>

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
    cout <<left;
    cout<<setw(10)<<"Marca";
    cout<<setw(10)<<"Color";
    cout<<setw(10)<<"Precio";
    cout<<setw(10)<<"Memoria";
    cout<<endl;
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

void Laboratorio::respaldar()
{
    ofstream archivo ("computadoras.txt");
    if (archivo.is_open()){
        for(size_t i=0;i<cont;i++){
            Computadora &c = arreglo[i];
            archivo << c.getMarca()<<endl;
            archivo << c.getColor()<<endl;
            archivo << c.getPrecio()<<endl;
            archivo << c.getMemoria()<<endl;
    }
}
    archivo.close();
}

void Laboratorio::recuperar()
{
    ifstream archivo("computadoras.txt");
    if(archivo.is_open()){
        string t;
        float precio;
        int memoria;
        Computadora c;

        while(true){
            getline(archivo, t);
            if (archivo.eof()){
                break;
            }
            c.setMarca(t);
            getline(archivo, t);
            c.setColor(t);
            getline(archivo, t);
            precio = stof(t);
            c.setPrecio(precio);
            getline(archivo, t);
            memoria = stoi(t);
            c.setMemoria(memoria);
            agregarFinal(c);
        }
    }
    archivo.close();
}