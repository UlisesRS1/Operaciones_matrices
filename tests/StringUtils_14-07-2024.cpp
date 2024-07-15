#include<iostream>
#include "utils/StringUtils.h"

int main(){
    //  Prueba con cadena
    std::string cadena = "Prueba de espaciado";
    //  El resultado esperado seria "Pruebadeespaciado"

    std::cout << "Cadena nueva (sin espcios) = " << StringUtils::strip(cadena) << std::endl;
    //  Funciono sin problemas

    //  Prueba con cadena con tabuladores
    cadena.clear();
    cadena = "      Prueba    con    tabs       ";

    //  El resultado esperado seria "Pruebacontabs"
    std::cout << "Cadena nueva (sin espcios y sin tabs) = " << StringUtils::strip(cadena) << std::endl;
    //  Funciono sin problemas
}