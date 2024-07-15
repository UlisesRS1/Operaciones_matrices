#include<iostream>
#include "Fraccion/Fraccion.h"

int main(){
    //  Pruebas de transfomacion a tipos de datos de fracciones
    /**
     * toInt()
     * toDouble()
     * toFloat()
     */

    //  toInt()

    Fraccion frac(1, 3);
    int toInt = frac.toInteger();

    std::cout << "Resultado de int = " << toInt << std::endl;

    //  toDouble()
    double toDouble = frac.toDouble();

    std::cout << "Resultado de double = " << toDouble << std::endl;

    //  toFloat()
    float toFloat = frac.toFloat();

    std::cout << "Resultado de float = " << toFloat << "f" <<  std::endl;
}