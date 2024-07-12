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
#include <algorithm>
#include <string>
#include "utils/StringUtils.h"

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

void Fraccion::setTexttoFraccion(const std::string& fraccion) {
    std::vector<std::string> valores = StringUtils::split(fraccion, '/');

    this -> numerador = stoi(valores[0]);
    this -> denominador = stoi(valores[1]);
}

/**
 * @brief Constructor que recibe un string para la construccion de un objeto Fraccion
 * @details El formato en string se usa "a/b", por ejemplo, Fraccion("1/4"); 
 * 
 * @param fraccion String para separar los numeros del texto.
*/

Fraccion::Fraccion(const std::string& fraccion){
    setTexttoFraccion(fraccion);
} 

/**
 * @brief Transforma un valor double a su equivalencia en Fraccion
 * 
 * @param flotante 
 * @return Fraccion 
*/
Fraccion Fraccion::toFraccion(double flotante) const{
    //  Variables para la trata del double
    std::string fl = std::to_string(flotante);
    std::string resultado;

    //  Numerador y denominador
    int numerador;
    int denominador;

    //  Split del double convertido en texto
    std::vector<std::string> split = StringUtils::split(fl, '.');
    
    //  Quitando el punto decimal y juntando el split
    resultado = split[0] + split[1];

    numerador = std::stoi(resultado);
    denominador = static_cast<int>(std::pow(10, split[1].length()));

    //  Devolver la fracción
    return Fraccion(numerador, denominador);
}

/**
 * @brief Transforma un valor float a su equivalencia en Fraccion
 * 
 * @param flotante 
 * @return Fraccion 
*/
Fraccion Fraccion::toFraccion(float flotante) const{
    std::string fl = std::to_string(flotante);
    std::string resultado;

    //  Numerador y denominador
    int numerador;
    int denominador;

    //  Split del double convertido en texto
    std::vector<std::string> split = StringUtils::split(fl, '.');
    
    //  Quitando el punto decimal y juntando el split
    resultado = split[0] + split[1];

    numerador = std::stoi(resultado);
    denominador = static_cast<int>(std::pow(10, split[1].length()));

    //  Devolver la fracción
    return Fraccion(numerador, denominador);
}

/**
 * @brief Implementación de la sobrecarga del operador +
 * 
 * @param frac Fraccion
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
 * @brief Implementacion de la sobre cargar del operador +, con double
 * 
 * @param flotante double
 * @return Fraccion: Resultado de la suma
 */
Fraccion Fraccion::operator+(double flotante) const{
    //  Fracciones para la suma
    Fraccion frac(numerador, denominador);
    Fraccion flot = toFraccion(flotante);

    return frac + flot; 
}  

/**
 * @brief Implementacion de la sobre cargar del operador +, con float
 * 
 * @param flotante float
 * @return Fraccion:  Resultado de la suma
*/
Fraccion Fraccion::operator +(float flotante) const{
    //  Fracciones para la suma
    Fraccion frac(numerador, denominador);
    Fraccion flot = toFraccion(flotante);

    return frac + flot; 
}

/**
 * @brief Implementación de la sobrecarga del operador -
 * 
 * @param frac Fraccion
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
 * @param entero int
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
 * @brief Implementación de la sobrecarga del operador -, con double
 * 
 * @param flotante double
 * @return Fraccion: Resultado de la resta
 */
Fraccion Fraccion::operator -(double flotante) const{
    Fraccion frac(numerador, denominador);
    Fraccion flot = toFraccion(flotante);

    return frac - flot; 
}

/**
 * @brief Implementación de la sobrecarga del operador -, con float
 * 
 * @param flotante float
 * @return Fraccion: Resultado de la resta
 */
Fraccion Fraccion::operator -(float flotante) const{
    Fraccion frac(numerador, denominador);
    Fraccion flot = toFraccion(flotante);

    return frac - flot; 
}

/**
 * @brief Implementación de la sobrecarga del operador *
 * 
 * @param frac Fraccion
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
 * @param entero int
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
 * @brief Implementación de la sobrecarga del operador *, con double
 * 
 * @param flotante double
 * @return Fraccion: Resultado de la multiplicacion
 */
Fraccion Fraccion::operator*(double flotante) const{
    Fraccion frac(numerador, denominador);
    Fraccion flot = toFraccion(flotante);

    return frac * flot; 
}

/**
 * @brief Implementación de la sobrecarga del operador *, con float
 * 
 * @param flotante float
 * @return Fraccion: Resultado de la multiplicacion
 */
Fraccion Fraccion::operator*(float flotante) const{
    Fraccion frac(numerador, denominador);
    Fraccion flot = toFraccion(flotante);

    return frac * flot; 
}

/**
 * @brief Implementación de la sobrecarga del operador /
 * 
 * @param frac Fraccion
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
 * @param entero int
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
 * @brief Implementación de la sobrecarga del operador /, con double
 * 
 * @param flotante double
 * @return Fraccion: Resultado de la division
 */
Fraccion Fraccion::operator/(double flotante) const{
    Fraccion frac(numerador, denominador);
    Fraccion flot = toFraccion(flotante);

    return frac / flot; 
}

/**
 * @brief Implementación de la sobrecarga del operador /, con float
 * 
 * @param flotante float
 * @return Fraccion: Resultado de la division
 */
Fraccion Fraccion::operator/(float flotante) const{
    Fraccion frac(numerador, denominador);
    Fraccion flot = toFraccion(flotante);

    return frac / flot; 
}

/**
 * @brief Elevara la fraccion al valor que reciba pow; (a/b)^pow 
 * 
 * @param pow Valor al que se elevara la fracción
 * @return Fraccion 
*/
Fraccion Fraccion::pow(int pow) const{
    return Fraccion(std::pow(numerador, pow), std::pow(denominador, pow));
}

/* 
                           -- Postulacion de mejora -- 
    Debido a que la raiz cuadrada puede dar como resultado un numero double,
    la propuesta es cambiar el tipo de dato que se maneja como numerador y 
    denominador de la fracción de valores int a valores double para almacenar
    los datos de manera que se mantenga la mayor fidelidad en cuanto a la raiz
    cuadrada;
    
    Otra opcion es que los valores que no cuenten con una raiz cuadrada perfecta
    se impriman con un simbolo de radicacion para solo expresar la operación.

*/

/**
 * @brief Calculara la raiz cuadrada de la fraccion; sqrt()
 * 
 * @return Fraccion: Raiz cuadrada de la fraccion
*/
Fraccion Fraccion::sqrt() const{
    return Fraccion(std::sqrt(numerador), std::sqrt(denominador));
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
 * @brief Sobrecarga del operador !=
 * 
 * @param frac 
 * @return true: Si las fracciones no son iguales 
 * @return false: Si las fracciones son iguales
*/
bool Fraccion::operator!=(const Fraccion& frac) const{
    return (numerador * frac.denominador) != (denominador * frac.numerador);
}

/**
 * @brief Sobrecarga del operador !=
 * 
 * @param entero 
 * @return true: Si la fraccion y el entero no son iguales
 * @return false: Si la fraccion y el entero son iguales
*/
bool Fraccion::operator!=(int entero) const{
    return (numerador * 1) != (denominador * entero);
}

 /**
 * @brief Sobrecarga del operador <
 * 
 * @param frac 
 * @return true: Si la fraccion es menor que frac
 * @return false: Si la fraccion no es menor que frac
*/
bool Fraccion::operator<(const Fraccion& frac) const{
    return (static_cast<double>(numerador) / static_cast<double>(denominador)) < (static_cast<double>(frac.numerador) / static_cast<double>(frac.denominador));
}

/**
 * @brief Sobrecarga del operador <
 * 
 * @param entero
 * @return true: Si la fraccion es menor que el entero
 * @return false: Si la fraccion no es menor que el entero
*/
bool Fraccion::operator<(int entero) const{
    return (static_cast<double>(numerador) / static_cast<double>(denominador)) < (static_cast<double>(entero));
}

/**
 * @brief Sobrecarga del operador >
 * 
 * @param frac 
 * @return true: Si la fraccion es mayor que frac
 * @return false: Si la fraccion no es mayor que frac
*/
bool Fraccion::operator>(const Fraccion& frac) const{
    return (static_cast<double>(numerador) / static_cast<double>(denominador)) > (static_cast<double>(frac.numerador) / static_cast<double>(frac.denominador));
}
    
/**
 * @brief Sobrecarga del operador >
 * 
 * @param entero
 * @return true: Si la fraccion es mayor que el entero
 * @return false: Si la fraccion no es mayor que el entero
*/
bool Fraccion::operator>(int entero) const{
    return (static_cast<double>(numerador) / static_cast<double>(denominador)) > (static_cast<double>(entero));
}

/**
 * @brief Sobrecarga del operador <=
 * 
 * @param frac 
 * @return true: Si la fraccion es menor o igual que frac
 * @return false: Si la fraccion no es menor o igual que frac
*/
bool Fraccion::operator<=(const Fraccion& frac) const{
    return (static_cast<double>(numerador) / static_cast<double>(denominador)) <= (static_cast<double>(frac.numerador) / frac.denominador);
}
    
/**
 * @brief Sobrecarga del operador <=
 * 
 * @param entero 
 * @return true: Si la fraccion es menor o igual que el entero
 * @return false: Si la fraccion no es menor o igual que el entero
*/
bool Fraccion::operator<=(int entero) const{
    return (static_cast<double>(numerador) / static_cast<double>(denominador)) <= (static_cast<double>(entero));
}

/**
 * @brief Sobrecarga del operador >=
 * 
 * @param frac 
 * @return true: Si la fraccion es mayor o igual que frac
 * @return false: Si la fraccion no es mayor o igual que frac
*/
bool Fraccion::operator>=(const Fraccion& frac) const{
    return (static_cast<double>(numerador) / static_cast<double>(denominador)) >= (static_cast<double>(frac.numerador) / static_cast<double>(frac.denominador));
}
    
/**
 * @brief Sobrecarga del operador >=
 * 
 * @param entero 
 * @return true: Si la fraccion es mayor o igual que el entero
 * @return false: Si la fraccion no es mayor o igual que el entero
*/
bool Fraccion::operator>=(int entero) const{
    return (static_cast<double>(numerador) / static_cast<double>(denominador)) >= (static_cast<double>(entero));
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

/*
    Agregar las siguientes operaciones para la siguiente version de Fraccion
        -   Potencia de un fraccion
            --  En este caso se debera de solo pedir el valor del exponente y el metodo se llamara 
                pow(int pow)
        -   Radicacion de una fraccion
            --  Solo radicara con el valor por defecto, es decir, solo se hara la raiz cuadrada, por el momento.
        -   Operaciones de comparación
            --  Es decir, terminar de sobrecargar los operadores <, >, !=, <=, >= para su uso en comparaciones
 */