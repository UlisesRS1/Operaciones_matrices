#include <iostream>
#include "Fraccion/Fraccion.h"

int main(){
    //  Prueba de sobrecarga de operadores

    //  Fracciones de prueba
    Fraccion first(1, 5);
    Fraccion second(1, 3);

    Fraccion equalsToFirst(first);
    
    //  bool para la comprobacion
    bool testOperator;
    
    //  Operador ==
    testOperator = first == second;
    std::cout << "testOperator(==) = " << testOperator << std::endl;
    
    testOperator = first == equalsToFirst;
    std::cout << "testOperator(==) = " << testOperator << std::endl;
    
    //  Operador !=
    testOperator = first != second;
    std::cout << "testOperator(!=) = " << testOperator << std::endl;
    
    testOperator = first != equalsToFirst;
    std::cout << "testOperator(!=) = " << testOperator << std::endl;
    
    //  Operador <
    testOperator = first < second;
    std::cout << "testOperator(<) = " << testOperator << std::endl;
    
    testOperator = first < equalsToFirst;
    std::cout << "testOperator(<) = " << testOperator << std::endl;
    
    //  Operador >
    testOperator = first > second;
    std::cout << "testOperator(>) = " << testOperator << std::endl;
    
    testOperator = first > equalsToFirst;
    std::cout << "testOperator(>) = " << testOperator << std::endl;
    
    //  Operador <=
    testOperator = first <= second;
    std::cout << "testOperator(<=) = " << testOperator << std::endl;
    
    testOperator = first <= equalsToFirst;
    std::cout << "testOperator(<=) = " << testOperator << std::endl;
    
    //  Operador >=
    testOperator = first >= second;
    std::cout << "testOperator(>=) = " << testOperator << std::endl;
    
    testOperator = first >= equalsToFirst;
    std::cout << "testOperator(>=) = " << testOperator << std::endl;
    
    return 0;
}