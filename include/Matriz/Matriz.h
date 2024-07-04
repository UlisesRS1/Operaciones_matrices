#ifndef MATRIZ_H
#define MATRIZ_H
/**
 * @file Matriz.h
 * @author Ulises (rodriguezsolorzanoulises@gmail.com)
 * @brief Clase para llevar a cabo operaciones con matrices
 * @version 0.2
 * @date 2024-06-19
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/*
    ---------------------- Importante ----------------------
        ->  Crea la clase Fraccion para las operaciones **

    ------------------------ Tareas ------------------------
    Orden, se representara con (numero) despues de la tarea
        ->  Determinante    (1)     Importante para otras tareas
        ->  Suma de matrices    (2)
        ->  Resta de matrices   (3)
        ->  Multiplicacion de matrices  (4)
        ->  Multiplicar por escalar (5)
        ->  Division de matrices ?? (6)
        ->  (Extra) Agregar fracciones si es posible, crear clase, etc. **
*/

#include<iostream>
#include<vector>
#include "Fraccion/Fraccion.h"


class Matriz{
    private:
        /**
         * @brief Matriz de fracciones
         * @details Se usa para el calculo de difentes operadores
         */
        std::vector<std::vector<Fraccion>> vector;

        /**
         * @brief Metodo que verifica si dos matrices son de igual dimensión o diemsiones
         * 
         * @param vec Objeto Matriz
         * @return true: Si las matrices son de iguales dimensiones
         * @return false: Si las matrices no son de iguales dimensiones
         */
        bool verificarIgualdad(const Matriz& vec) const;

        /**
         * @brief Metodo que verifica si es posible multiplicar estas mismas
         * 
         * @param vec Objeto Matriz
         * @return true: Si las matrices es posible multiplicarlas
         * @return false: Si las matrices no es posible multiplcarse
         */
        bool verificarPosibleMultiplicacion(const Matriz& vec) const;

        /**
         * @brief Comprobara que la matriz sea correctamente "cuadrada" o "rectangular"
         * @details Con "cuadrada" o "rectangular" se refiere que todos elementos dentro de
         *          std::vector<std::vector<Fraccion>>, mas especificamente "vector<Fraccion>",
         *          tenga como valor de size() igual en cada uno de los vectores guardados dentro
         *          de std::vector<>
         * 
         * @param vec 
         * @return true: Si la matriz en correctamente "cuadrada" o "rectangular" 
         * @return false: Si la matriz no es correctamente "cuadrada" o "rectangular"
         */
        bool integridadMatriz() const;

        /**
         * @brief Verifica si la matriz es cuadrada
         * @details Verificar si la matriz tienes las mismas dimensiones tanto en el eje i como en el j
         * 
         * @return true: Si la matriz es cuadrada
         * @return false: Si la matriz no es cuadrada
         */
        bool verificarCuadradoMatriz(const Matriz& vec) const;

        /**
         * @brief Divide la matriz en cofactores a partor de una coordenada i, j que se ingerese 
         * 
         * @param i Es la posicion i de la matriz para determinar el cofactor
         * @param j Es la posicion j de la matriz para determinar el cofactor
         * @return Matriz: Cofactor resultante
         */
        Fraccion mCofactor(const Matriz& vec, int imatriz, int jmatriz) const;

        /**
         * @brief Devolvera la matriz de un cofactor.
         * @details Eliminara los valores que sean igual a imatriz y jmatriz
         * 
         * @param vec 
         * @param imatriz Valor de i
         * @param jmatriz Valor de j
         * @return Matriz 
         */
        Matriz cofactor(const Matriz& vec, int imatriz, int jmatriz) const;

    public:        

        /**
         * @brief Construct vacio para la declaracion "Matriz nombre_variable;"
         * 
         */
        Matriz(){}

    /**
     * @brief Constructor mediante un vector
     * @details Constructor que usa un vector para la inicializacion del unico atributo de la clase (std::vector<std::vector<Fraccion>> vector)
     * @param vector Vector de fracciones
     */
        Matriz(const std::vector<std::vector<Fraccion>>& vector);

        /**
         * @brief Set el Vector
         * 
         * @param vector Vector de Fracciones (Fraccion)
         */
        void setVector(const std::vector<std::vector<Fraccion>>& vector){
            this -> vector = vector;
        }

        /**
         * @brief Get del vector
         * 
         * @return const std::vector<std::vector<Fraccion>>& 
         */
        const std::vector<std::vector<Fraccion>>& getVector() const{
            return this -> vector;
        }

        /**
         * @brief Suma de matrices
         * 
         * @param vec Objeto Matriz
         * @return Matriz: resultado de la suma 
         */
        Matriz operator +(const Matriz& vec) const;

        /**
         * @brief Resta de matrices
         * 
         * @param vec Objeto Matriz
         * @return Matriz: resultado de la resta
         */
        Matriz operator -(const Matriz& vec) const;

        /**
         * @brief Multiplicación de matrices
         * 
         * @param vec Objeto Matriz
         * @return Matriz: resultado de la multiplicacion
         */
        Matriz operator *(const Matriz& vec) const;

        /**
         * @brief Multiplicación por escalar
         * 
         * @param escalar Valor escalar 
         * @return Matriz: Resultado de multiplicar por escalar
         */
        Matriz operator *(int escalar) const;

        /**
         * @brief Multiplicacion por un escalar de tipo fracción
         * 
         * @param frac Valor del escalar como fracción
         * @return Matriz: Resultado de la multiplicación
         */
        Matriz operator * (const Fraccion& frac) const; 

        /**
         * @brief Determinante de la matriz
         *          
         * @return Fraccion: Valor del determinante de la matriz
         */
        Fraccion determinante(const Matriz& vec) const; /* Determinante del vector para implementación */

        /**
         * @brief Matriz inversa de la matriz original
         * 
         * @return Matriz: Inversa de la original
         */
        Matriz inversa() const;

        /**
         * @brief Devolvera la matriz transpuesta 
         * 
         * @return Matriz 
         */
        Matriz transpuesta(const Matriz& vec) const;

        /**
         * @brief Impresion de los datos del vector
         * 
         * @param os 
         * @param vec Objeto Matriz
         * @return std::ostream& 
         */
        friend std::ostream& operator <<(std::ostream& os, const Matriz& vec);
};

#endif MATRIZ_H
