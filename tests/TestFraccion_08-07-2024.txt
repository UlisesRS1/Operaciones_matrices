#include<iostream>
#include "utils/StringUtils.h"
#include "Fraccion/Fraccion.h"

int main(){
    //  Inicializacion de un objeto Fraccion con un string
    std::string frac = "1/12";

    Fraccion fraccion(frac);
    //  Se paso el test sencillo
    std::cout << "Fraccion = " << fraccion << std::endl;

    //  Test con espacidados
    std::string frac2 = "1 / 12";

    Fraccion fraccion2(frac2);
    //  Paso el test sencillo
    std::cout << "Fraccion 2 = " << fraccion2 << std::endl;
}