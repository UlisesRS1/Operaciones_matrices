#include<iostream>
#include "Matriz/Matriz.h"
#include "Fraccion/Fraccion.h"

int main(){
    std::cout<<"----- Pruebas de Matriz -----" << std::endl;

    std::vector<std::vector<Fraccion>> vectorFirst = {
        {Fraccion(2, 1), Fraccion(0, 1), Fraccion(1, 1)},
        {Fraccion(3, 1), Fraccion(0, 1), Fraccion(0, 1)}, 
        {Fraccion(5, 1), Fraccion(1, 1), Fraccion(1, 1)}
    };

    std::vector<std::vector<Fraccion>> vectorSec = {
        {Fraccion(1, 1), Fraccion(-3, 1), Fraccion(-1, 1), Fraccion(4, 1), Fraccion(5, 1)},
        {Fraccion(9, 1), Fraccion(2, 1), Fraccion(2, 1), Fraccion(5, 1), Fraccion(3, 1)},
        {Fraccion(3, 1), Fraccion(0, 1), Fraccion(3, 1), Fraccion(18, 1), Fraccion(16, 1)},
        {Fraccion(5, 1), Fraccion(8, 1), Fraccion(7, 1), Fraccion(2, 1), Fraccion(4, 1)},
        {Fraccion(5, 1), Fraccion(8, 1), Fraccion(7, 1), Fraccion(2, 1), Fraccion(3, 1)}
    };

    Matriz first(vectorFirst);
    Matriz second(vectorSec);

    //  Pruebas de impresion
    std::cout << first << std::endl;

    //Prueba del operador sumar
    std::cout << "--- Suma de matrices ----" << std::endl;

    //  Suma
    Matriz resultadoSuma = first + second;
    
    //  Impresion del resultado
    std::cout << resultadoSuma << std::endl;

    //Prueba del operador resta
    std::cout << "--- Resta de matrices ----" << std::endl;

    //  Resta
    Matriz resultadoResta = first - second;
    
    //  Impresion del resultado
    std::cout << resultadoResta << std::endl;

    //  Prueba operador Multiplicando
    std::cout << "--- Multiplicación de matrices ----" << std::endl;

    //  Multiplicacion
    Matriz resultadoMultiplicacion = first * second; 
    
    //  Impresion del resultado
    std::cout << resultadoMultiplicacion << std::endl;

    //  Multiplcacion por un escalar
    std::cout << "--- Multiplicación por escalar ----" << std::endl;

    //Multiplicacion por escalar
    Matriz resultadoEscalar = second * 4;

    //Imperesion del resultado
    std::cout << resultadoEscalar << std::endl;

    //  Determinante de una funcion
    std::cout << "--- Determinante de una matriz ----" << std::endl;
    
    //  Matriz original
    std::cout << "--- Matriz original ----" << std::endl;
    std::cout << second << std::endl;


    //  Resultado del determinante
    Fraccion resultdoDeterminante = Matriz().determinante(second);

    //  Impresion del resultado
    std::cout << "Determinante = " << resultdoDeterminante << std::endl;

    //  Matriz original para comparación
    std::cout << "-- Matriz original --" << std::endl;
    std::cout << first << std::endl;

    //  Inversa de una matriz
    Matriz resultadoInversa = second.inversa();

    //  Impresion del resultado
    std::cout << "-- Inversa de la matriz --" << std::endl;
    std::cout << resultadoInversa << std::endl;

}