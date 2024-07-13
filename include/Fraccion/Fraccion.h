/**
 * @file Fraccion.h
 * @author Ulises (rodriguezsolorzanoulises@gmail.com)
 * @brief Clase para operaciones con fracciones
 * @version 0.3
 * @date 2024-06-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef FRACCION_H
#define FRACCION_H

#include<iostream>
#include<vector>

/*
    ------------------------ Tareas ------------------------
        ->  Suma    (public)**
        ->  Resta   (public)** 
        ->  Multiplicacion  (public)**
        ->  Division    (public)**
        ->  Simplificacion de fracciones    (private)**
        ->  Imprimir fracción con formato x/y.**

        -- De manera general solo falta la implementación

                        Nuevas tarea
        ->  Creacion de metodos para el manejo de operaciones con mas 
            tipos de datos con fracciones
        (Para hacer la libreria un poco más completa)
        (Aplicara tambien para las operaciones de matrices) 
        ->  Agragar un metodo que retorne un string en el cual se muestre
            la fraccion en el fomato "entero a/b".
 */


/**
 * @brief Clase para el uso de fracciones
 * 
 */
class Fraccion
{
private:
    /**
     * @brief Numerador de la fraccion
     * @details El numerador, siguiendo el formato x/y, es igual a x en este formato
     */
    int numerador;
    /**
     * @brief Denominador de la fraccion
     * @details El denominador, siguiendo el formato x/y, es igual a y en este formato
     */
    int denominador;

    /**
     * @brief Simplifica la fracción
     * @details Se usa la libreria numeric para el calculo del MCD para la simplificación
     */
    void simplificar();

    /**
     * @brief Set the Text to Fraccion object
     * 
     * @param fraccion 
     */
    void setTexttoFraccion(const std::string& fraccion);

    /**
     * @brief Transforma un valor double a su equivalencia en Fraccion
     * 
     * @param flotante 
     * @return Fraccion 
     */
    Fraccion toFraccion(double flotante) const;
    
    /**
     * @brief Transforma un valor float a su equivalencia en Fraccion
     * 
     * @param flotante 
     * @return Fraccion 
     */
    Fraccion toFraccion(float flotante) const;

public:
    /**
     * @brief Constructor de un nuevo objeto Fraccion vacio
     * 
     */
    Fraccion();

    /**
     * @brief Constructor de un nuevo objeto Fraccion con numerador y denominador
     * @details Recibe tanto el numerado como el denominador
     * @param numerador Siguiendo el formato x/y, este param es igual a x
     * @param denominador Siguiendo el formato x/y, este param es igual a y
     */
    Fraccion(int numerador, int denominador);

    /**
     * @brief Constructor de un nuevo objeto Fraccion con un objeto Fraccion
     * @details Recibe un objeto Fraccion para la creacion de una 
     * 
     * @param frac Fraccion, objeto Fraccion
     */
    Fraccion(const Fraccion& frac) : Fraccion(frac.numerador, frac.denominador) {}

    /**
     * @brief Constructor que recibe un string para la construccion de un objeto Fraccion
     * @details El formato en string se usa "a/b", por ejemplo, Fraccion("1/4"); 
     * 
     * @param fraccion String para separar los numeros del texto.
     */
    Fraccion(const std::string& fraccion);

    /**
     * @brief Set el numerador del objeto Fracción
     * 
     * @param n Nuevo valor del numerador a asignar
     */
    void setNumerador(int n){
        this->numerador = n;
    }

    /**
     * @brief Get el numerador del objeto Fracción
     * 
     * @return int: Valor del numerador
     */
    int getNumerador(){
        return this->numerador;
    }

    /**
     * @brief Set el denominador del objeto Fracción
     * 
     * @param d Nuevo valor del denominador a asignar
     */
    void setDenominador(int d){
        this->denominador = d;
    }

    /**
     * @brief Get el denominador del objeto Fracción
     * 
     * @return int: Valor del denominador
     */
    int getDenominador(){
        return this->denominador;
    }

    /**
     * @brief Limpriara la fraccion por el valor por defecto (0 / 1)
     * 
     */
    void limpiar();

    /**
     * @brief Suma de dos Fracciones
     * 
     * @param frac Objeto Fraccion()
     * @return Fraccion: Resultado de la suma
     */
    Fraccion operator +(const Fraccion& frac) const;
    
    /**
     * @brief Suma de fracción y de un entero
     * 
     * @param entero Numero entero (int)
     * @return Fraccion: Resultado de la suma
     */
    Fraccion operator +(int entero) const;

    /**
     * @brief Suma de fraccion y de un double
     * 
     * @param flotante Numero flotante (double)
     * @return Fraccion: Resultado de la suma
     */
    Fraccion operator +(double flotante) const;

    /**
     * @brief Suma de fraccion y de un float
     * 
     * @param flotante Numero flotante (float)
     * @return Fraccion:  Resultado de la suma
     */
    Fraccion operator +(float flotante) const;

    /**
     * @brief Resta de Fracciones
     * 
     * @param frac Objeto Fraccion()
     * @return Fraccion: Resultado de la resta
     */
    Fraccion operator -(const Fraccion& frac) const;

    /**
     * @brief Resta de Fraccion y entero
     * 
     * @param entero Numero entero (int)
     * @return Fraccion: Resultado de la resta
     */
    Fraccion operator -(int entero) const;

    /**
     * @brief Resta de fraccion y flotante (double)
     * 
     * @param flotante 
     * @return Fraccion 
     */
    Fraccion operator -(double flotante) const;

    /**
     * @brief Resta de fraccion y de flotante (float)
     * 
     * @param flotante 
     * @return Fraccion 
     */
    Fraccion operator -(float flotante) const;
    
    /**
     * @brief Multiplicación de Fracciones 
     * 
     * @param frac Objeto Fraccion()
     * @return Fraccion: Resultado de la multiplicacion 
     */
    Fraccion operator *(const Fraccion& frac) const;

    /**
     * @brief Multiplicación de fracción con entero
     * 
     * @param entero Numero entero (int)
     * @return Fraccion: Resultado de la multiplicacion
     */
    Fraccion operator *(int entero) const;

    /**
     * @brief Multiplicación de fracción con double
     * 
     * @param flotante Numero flotante (double) 
     * @return Fraccion: Resultado de la multiplicacion
     */
    Fraccion operator *(double flotante) const;

    /**
     * @brief Multiplicacion de fracción con float
     * 
     * @param flotante Numero flotante (float)
     * @return Fraccion: Resultado de la multiplicacion
     */
    Fraccion operator *(float flotante) const;

    /**
     * @brief División de Fracciones
     * 
     * @param frac Objeto Fraccion()
     * @return Fraccion: Resultado de la divicion
     */
    Fraccion operator /(const Fraccion& frac) const;

    /**
     * @brief División de fracción con entero
     * 
     * @param entero Numero entero (int)
     * @return Fraccion: Resultado de la division
     */
    Fraccion operator /(int entero) const;

    /**
     * @brief Division de fraccion con double
     * 
     * @param flotante Numero flotante (double)
     * @return Fraccion: Resultado de la division 
     */
    Fraccion operator /(double flotante) const;
    
    /**
     * @brief Division de fraccion con float
     * 
     * @param flotante Numero flotante (float)
     * @return Fraccion: Resultado de la division
     */
    Fraccion operator /(float flotante) const;

    /**
     * @brief Devuelve el valor aproximado a la fraccion como entero
     * 
     * @return int 
     */
    int toInteger() const;

    /**
     * @brief Devuelve el valor aproximado de la fraccion como double
     * 
     * @return double 
     */
    double toDouble() const;

    /**
     * @brief Devuelve el valor aproximado de la fraccion como float
     * 
     * @return float 
     */
    float toFloat() const;

    /**
     * @brief Elevara la fraccion al valor que reciba pow; (a/b)^pow 
     * 
     * @param pow Valor al que se elevara la fracción
     * @return Fraccion 
     */
    Fraccion pow(int pow) const;

    /**
     * @brief Calculara la raiz cuadrada de la fraccion; sqrt()
     * 
     * @return Fraccion: Raiz cuadrada de la fraccion
     */
    Fraccion sqrt() const;

    /**
     * @brief Sobrecarga del operador ==
     * @details Devolvera el resultado para la comparación de dos fracciones 
     * 
     * @param otra 
     * @return true: Si las fraciones son iguales
     * @return false: Si no son iguales
     */
    bool operator==(const Fraccion& frac) const;

    /**
     * @brief Sobrecarda del operador ==
     * @details Devolvera el resultado para la comparacion de un fraccion y un entero
     * 
     * @param frac 
     * @return true: Si la fraccion y el entero son iguales
     * @return false: si lafraccion y el entero no son iguales
     */
    bool operator==(int entero) const;

    /**
     * @brief Sobrecarga del operador !=
     * 
     * @param frac 
     * @return true: Si las fracciones no son iguales 
     * @return false: Si las fracciones son iguales
     */
    bool operator!=(const Fraccion& frac) const;

    /**
     * @brief Sobrecarga del operador !=
     * 
     * @param entero 
     * @return true: Si la fraccion y el entero no son iguales
     * @return false: Si la fraccion y el entero son iguales
     */
    bool operator!=(int entero) const;

    /**
     * @brief Sobrecarga del operador <
     * 
     * @param frac 
     * @return true: Si la fraccion es menor que frac
     * @return false: Si la fraccion no es menor que frac
     */
    bool operator<(const Fraccion& frac) const;
    
    /**
     * @brief Sobrecarga del operador <
     * 
     * @param entero
     * @return true: Si la fraccion es menor que el entero
     * @return false: Si la fraccion no es menor que el entero
     */
    bool operator<(int entero) const;

    /**
     * @brief Sobrecarga del operador >
     * 
     * @param frac 
     * @return true: Si la fraccion es mayor que frac
     * @return false: Si la fraccion no es mayor que frac
     */
    bool operator>(const Fraccion& frac) const;
    
    /**
     * @brief Sobrecarga del operador >
     * 
     * @param entero
     * @return true: Si la fraccion es mayor que el entero
     * @return false: Si la fraccion no es mayor que el entero
     */
    bool operator>(int entero) const;

    /**
     * @brief Sobrecarga del operador <=
     * 
     * @param frac 
     * @return true: Si la fraccion es menor o igual que frac
     * @return false: Si la fraccion no es menor o igual que frac
     */
    bool operator<=(const Fraccion& frac) const;
    
    /**
     * @brief Sobrecarga del operador <=
     * 
     * @param entero 
     * @return true: Si la fraccion es menor o igual que el entero
     * @return false: Si la fraccion no es menor o igual que el entero
     */
    bool operator<=(int entero) const;

    /**
     * @brief Sobrecarga del operador >=
     * 
     * @param frac 
     * @return true: Si la fraccion es mayor o igual que frac
     * @return false: Si la fraccion no es mayor o igual que frac
     */
    bool operator>=(const Fraccion& frac) const;
    
    /**
     * @brief Sobrecarga del operador >=
     * 
     * @param entero 
     * @return true: Si la fraccion es mayor o igual que el entero
     * @return false: Si la fraccion no es mayor o igual que el entero
     */
    bool operator>=(int entero) const;

    /**
     * @brief Sobrecarda del operador <<
     * @details Imprimira en tres formatos, primero el "original" o "natural" que es igual a x/y (por defecto), el "entero" que es igual 
     *          a x (En caso de denominador = ± 1), el negativo y final, teniendo en cuenta que por lo menos x o y sea negativo el formato seria -x/y.
     * @param frac Fraccion
     * @return std::ostream
     */
    friend std::ostream& operator <<(std::ostream& os, const Fraccion& frac);


};

#endif FRACCION_H

/*
                -------------------------- Notas --------------------------
                
                -- Estructura Básica para Sobrecargar Operadores --
    En C++, los operadores se sobrecargan utilizando funciones miembro o funciones amigas. 
    La estructura básica para sobrecargar un operador es la siguiente:

    cpp
    tipo_retorno operatorop(const tipo& operando) {
        // Implementación de la operación
        // Puedes acceder a los miembros de la clase y a los miembros de operando
        // Devuelve el resultado deseado
    }
    Donde:
    operatorop es el operador que deseas sobrecargar (por ejemplo, +, -, *, /, <<, >>, etc.).
    tipo_retorno es el tipo de dato que devuelve la operación.
    tipo es el tipo de dato del operando con el que estás trabajando.

                                --- Sobrecarga del operador << ---
    En C++, cuando sobrecargas el operador << para una clase, lo haces generalmente como una 
    función amiga (friend function) de esa clase. Esto tiene varias razones y beneficios:

    ->  Acceso a miembros privados: Como el operador << necesita acceder a los miembros privados 
        de la clase Fraccion para imprimirlos, se declara como amiga para tener acceso directo a 
        estos miembros, incluso si son privados.

    ->  Flujo de salida (ostream): El operador << está definido para trabajar con objetos que son 
        capaces de realizar operaciones de salida, representados por std::ostream. Esta clase 
        proporciona operaciones de salida comunes como operator<< para escribir datos en diversos 
        destinos (como la consola, archivos, etc.).

    ->  Referencia constante a Fraccion: El segundo parámetro de la función sobrecargada operator<< 
        es una referencia constante const Fraccion& frac. Esta referencia constante asegura que el 
        objeto frac pasado como argumento no se modificará dentro de la función operator<<.

    ->  std::ostream& operator<<(std::ostream& os, const Fraccion& frac) // Estructura
*/