#include <iostream>
#include "computadora.h"
using namespace std;


int main(){
    Computadora c01 = Computadora("lenovo", "azul", 55.0, 4); //La memoria es en GB

    Computadora c02;
    c02.setMarca("HP");
    c02.setColor("negro");
    c02.setPrecio(1200.0);
    c02.setMemoria(1024); //La memoria es en GB

    cout<<c02.getMarca()<<endl;
    cout<<c02.getColor()<<endl;
    cout<<c02.getPrecio()<<endl;
    cout<<c02.getMemoria()<<endl;
    return 0;
}