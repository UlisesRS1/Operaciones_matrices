#include<iostream>
#include "Fraccion/Fraccion.h"

int main(){
    //  Prueba de multiplicacion de Fraccion con double y con float
    Fraccion frac(1, 4);

    //  Double
    double flotanteDouble = 3.12;

    //  Flotante
    float flotanteFloat = 3.12f;

    //  Multiplicaciones
    Fraccion resultadoDouble = frac * flotanteDouble;
    Fraccion resultadoFloat = frac * flotanteFloat;

    //  imprimimos los resultados
    //  test 1: Esperamos 39 / 50
    //  test 2: Esperamos 3123 / 4000
    std::cout << "Resultado double = " << resultadoDouble << std::endl; 
    std::cout << "Resultado float = " << resultadoFloat << std::endl;

    //  Pasa el test

    //  Prueba de la division de Fraccion con double y con float

    Fraccion resultadoDivisionDouble = frac / flotanteDouble;
    Fraccion resultadoDivisionFloat = frac / flotanteFloat;

    //  imprimimos los resultados
    //  test 1: Esperamos 
    //  test 2: Esperamos 250 / 3123
    std::cout << "Resultado division double = " << resultadoDivisionDouble << std::endl; 
    std::cout << "Resultado division float = " << resultadoDivisionFloat << std::endl;

}