#include <iostream>
#include "suma.h"
#include "resta.h"

int main(int, char**) {
    // creamos una instancia de la clase suma, o lo que es lo mismo, 
    // una variable del tipo suma.
    suma s;
    
    s.cargar1();
    s.cargar2();
    s.operar();
    s.mostrarResultado();

    resta r;

    r.cargar1();
    r.cargar2();
    r.operar();
    r.mostrarResultado();
    
    return 0;
}
