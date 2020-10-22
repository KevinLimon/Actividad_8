#include <iostream>
#include "laboratorio.h"
using namespace std;


int main(){
    Computadora c01 = Computadora("Lenovo", "azul", 1550.0, 512); //La memoria es en GB

    Computadora c02;
    c02.setMarca("HP");
    c02.setColor("negro");
    c02.setPrecio(1200.0);
    c02.setMemoria(1024); //La memoria es en GB

    Computadora c03 = Computadora("Acer", "verde", 12000.0, 1024);

    //Computadora c04;
    //c04.setMarca("ASUS");
    //c04.setColor("blanco");
    //c04.setPrecio(15000.0);
    //c04.setMemoria(1024);

    //Computadora c05 = Computadora("Apple", "morado", 30000.0, 2048);

    Laboratorio lb;
    lb.agregarFinal(c01);
    lb.agregarFinal(c02);
    lb.agregarFinal(c03);
    //lb.agregarFinal(c04);
    //lb.agregarFinal(c05);
    Computadora c06;
    cin >> c06;
    lb<<c06;
    lb.mostrar();
    lb.respaldar();

    //cout << c01;
    //cout<<c02.getMarca()<<endl;
    //cout<<c02.getColor()<<endl;
    //cout<<c02.getPrecio()<<endl;
    //cout<<c02.getMemoria()<<endl;
    return 0;
}