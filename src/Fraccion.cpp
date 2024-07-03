/**
 * @file Fraccion.cpp
 * @author Ulises (rodriguezsolorzanoulises@gmail.com)
 * @brief Implementacion de Fraccion.h
 * @version 0.4
 * @date 2024-06-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "Fraccion/Fraccion.h"
#include<numeric>
#include <sstream>
#include<cmath>

/**
 * @brief Constructor por defecto que no recibe nada
 * @details La fraccion por defecto es 0 / 1
 * 
 */

Fraccion::Fraccion(){
    //Fracion por defecto sera 0/1
    this -> numerador = 0;
    this -> denominador = 1;
}

/**
 * @brief Establecera el valor por defecto (0 / 1)
 * 
 */
void Fraccion::limpiar(){
    //  Valor por defecto
    numerador = 0;
    denominador = 1;
}

/**
 * @brief Implementacion del metodo simplificar()
 * @details Se usa la std::gcd para calcular el MCD y se divide por cada miembro
 *          de la fraccion para simplificarla.
 */

void Fraccion::simplificar(){
    int mcd = std::gcd(numerador, denominador);
    numerador /= mcd;
    denominador /= mcd;
}

/**
 * @brief Implementacion del constructor Fraccion
 * 
 * @param numerador 
 * @param denominador 
 */
Fraccion::Fraccion(int numerador, int denominador) 
: numerador(numerador), denominador(denominador){
    simplificar();
} 

/**
 * @brief Implementación de la sobrecarga del operador +
 * 
 * @param frac 
 * @return Fraccion: Resultado de la suma 
 */
Fraccion Fraccion::operator+(const Fraccion& frac) const{
    //  Resultado en el numerador
    int num = (numerador * frac.denominador) + (denominador * frac.numerador);

    //  Resultado en el denominador
    int den = denominador * frac.denominador;

    //Retornar un objeto Fracción
    return Fraccion(num, den);
}

/**
 * @brief Implementación de la sobrecarga del operador +, con entero
 * 
 * @param entero 
 * @return Fraccion: Resultado de la suma 
 */
Fraccion Fraccion::operator + (int entero) const{
    //  Resultado en el numerador
    int num = numerador + (denominador * entero);

    //  Resultado en el denominador
    int den = denominador;

    //  Retornar un objeto Fracción 
    return Fraccion(num, den);
}

/**
 * @brief Implementación de la sobrecarga del operador -
 * 
 * @param frac 
 * @return Fraccion: Resultado de la resta 
 */
Fraccion Fraccion::operator -(const Fraccion& frac) const{
    //  Resultado en el numerador
    int num = (numerador * frac.denominador) - (denominador * frac.numerador);

    //  Resultado en el denominador
    int den = denominador * frac.denominador;

    //Retornar un objeto Fracción
    return Fraccion(num, den);
}

/**
 * @brief Implementación de la sobrecarga del operador -, con entero
 * 
 * @param entero 
 * @return Fraccion: Resultado de la resta
 */
Fraccion Fraccion::operator -(int entero) const{
    //  Resultado en el numerador
    int num = numerador - (denominador * entero);

    //  Resultado en el denominador
    int den = denominador;

    //  Retornar un objeto Fracción 
    return Fraccion(num, den);
}

/**
 * @brief Implementación de la sobrecarga del operador *
 * 
 * @param frac 
 * @return Fraccion: Resultado de la multiplicacion
 */
Fraccion Fraccion::operator *(const Fraccion& frac) const{
    //  Resultado en el numerador
    int num = numerador * frac.numerador;

    //  Resultado en el denominador
    int den = denominador * frac.denominador;
    
    //  Retornar un objeto Fracción 
    return Fraccion(num, den);
}

/**
 * @brief Implementación de la sobrecarga del operador *, con entero
 * 
 * @param entero 
 * @return Fraccion: Resultado de la multiplicacion
 */
Fraccion Fraccion::operator *(int entero) const{
    //  Resultado en el numerador
    int num = numerador * entero;

    //  Resultado en el denominador
    int den = denominador;
    
    //  Retornar un objeto Fracción 
    return Fraccion(num, den);
}

/**
 * @brief Implementación de la sobrecarga del operador /
 * 
 * @param frac 
 * @return Fraccion: Resultado de la division
 */
Fraccion Fraccion::operator /(const Fraccion& frac) const{
    //  Resultado en el numerador
    int num = numerador * frac.denominador;

    //  Resultado en el denominador
    int den = denominador * frac.numerador;
    
    //  Retornar un objeto Fracción 
    return Fraccion(num, den);
}

/**
 * @brief Implementación de la sobrecarga del operador /, con entero
 * 
 * @param entero 
 * @return Fraccion: Resultado de la division
 */
Fraccion Fraccion::operator /(int entero) const{
    //  Resultado en el numerador
    int num = numerador;

    //  Resultado en el denominador
    int den = denominador * entero;
    
    //  Retornar un objeto Fracción 
    return Fraccion(num, den);
}


/**
 * @brief Sobrecarga del operador ==
 * @details Devolvera el resultado para la comparación de dos fracciones 
 * 
 * @param otra 
 * @return true: Si las fraciones son iguales
 * @return false: Si no son iguales
*/
bool Fraccion::operator==(const Fraccion& frac) const {
    return (numerador * frac.denominador) == (denominador * frac.numerador);
}

/**
 * @brief Sobrecarda del operador ==
 * @details Devolvera el resultado para la comparacion de un fraccion y un entero
 * 
 * @param entero 
 * @return true: Si la fraccion y el entero son iguales
 * @return false: si lafraccion y el entero no son iguales
*/
bool Fraccion::operator==(int entero) const{
    return (numerador * 1) == (denominador * entero);
}

/**
 * @brief Impresion de Fraccion
 * 
 * @param os 
 * @param frac Objeto Fraccion
 * @return std::ostream& 
 */
std::ostream& operator <<(std::ostream& os, const Fraccion& frac){
    //  Cadena onStream para el mensaje
    std::stringstream ss;

    //  En caso de que la fraccion tenga denominador = 1 o denominador = -1
    if (frac.denominador == 1 || frac.denominador == -1)
    {
        //  En caso de tener el numerador negativo
        int num = frac.numerador / frac.denominador;
        //  Construccion de la cadena
        ss << num;

        //  "Asignacion"
        os << ss.str();
        
        //  Retorno
        return os;
    }

    //  En caso de que numerador o denominador sea negativo
    if(frac.numerador < 0 || frac.denominador < 0){
        //  Valor absoluto sin modificar los datos de frac
        int num = std::abs(frac.numerador);
        int den = std::abs(frac.denominador);
        
        /*
            Uso de std::stringstream: En la función operator<<, 
            se utiliza std::stringstream para construir el mensaje 
            de salida como una cadena. std::stringstream es una 
            clase de flujo que permite la construcción de cadenas 
            utilizando el operador << de manera similar a 
            std::ostream.
        */
        //  Construccion de la cadena
        ss << "-" << num << "/" << den;
        
        /*
            Impresión con std::stringstream: Se crea un objeto 
            std::stringstream llamado ss. Luego se utiliza 
            ss <<  << "/" <<  para construir la cadena en el 
            stringstream. Finalmente, ss.str() convierte el 
            contenido del stringstream en una cadena std::string 
            que se imprime en el flujo de salida os.
        */
       //   "Asignacion"
        os << ss.str();

        //  Retorno
        return os;
    }

    //  En caso de que ambos sean negativos
    if(frac.numerador < 0 && frac.denominador < 0){
        //  Construccion de la cadena
        ss << std::abs(frac.numerador) << "/" << std::abs(frac.denominador);
        
        //  "Asignacion"
        os << ss.str();
        
        //  Retorno
        return os;
    }

    //  Cadena por defecto
    ss << frac.numerador << "/" << frac.denominador;
    os << ss.str();
    return os;
}