#include <iostream>
#include "convertidor.h"
#include <tcl/tcl.h>
using namespace std;

int main()
{
    // creación del objeto
    Converter convertidor(1.0,1.0,1.0,1.0,1.0,1.0,5.0,1.0,1.0,1.0,1.0,1.0,1.0);
    // implementacion de los métodos
    convertidor.ecuations();
    convertidor.print(convertidor.A); // se accede al valor de la matriz A que es un atributo
    convertidor.print(convertidor.B);
    convertidor.print(convertidor.C);
    convertidor.print(convertidor.D1);
    //convertidor.print(convertidor.C);
    return 0;
}
