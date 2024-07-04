/**
 * @file Matriz.cpp
 * @author Ulises (rodriguezsolorzanoulises@gmail.com)
 * @brief Implementacion de Matriz.h 
 * @version 0.2
 * @date 2024-06-20
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include<iostream>
#include "Matriz/Matriz.h"
#include <sstream>
#include<vector>

/**
 * @brief Construct a new Matriz:: Matriz object
 * @details Inicializa el vector y comprueba la integridad de la matriz
 * 
 * @param vector Vector para la inicializacion del vector
 */
Matriz::Matriz(const std::vector<std::vector<Fraccion>>& vector) : vector(vector){
    //  Verificar su propia integridad
    if (!integridadMatriz())
    {
        std::cout << "Las filas deben de ser mismo tamaño " << std::endl;
    }
}

Matriz Matriz::cofactor(const Matriz& vec, int imatriz, int jmatriz) const{ 
    //  Para usar los indices que tiene el lenguaje
    imatriz -= 1;
    jmatriz -= 1;

    //  Matriz para el resultado
    std::vector<std::vector<Fraccion>> resultado;
    
    //  Matriz para la fila
    std::vector<Fraccion> fila;

    //  Algoritmo para la separacion por cofactor
    for (size_t i = 0; i < vec.vector.size(); i++)
    {
        for (size_t j = 0; j < vec.vector[i].size(); j++)
        {
            //  Si no es igual a i o j se agregara a al vector "fila"  
            if(i != imatriz && j != jmatriz){
                fila.push_back(vec.vector[i][j]);
                
            }
        }

        //  En caso de que "fila" este vacio que no se haga el push
        if(!fila.empty()){
            resultado.push_back(fila);
        }

        //  Limpiar "fila"
        fila.clear();
    }

    return Matriz(resultado);
}


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
bool Matriz::integridadMatriz() const{
    //  Se asumira que es integra
    bool integridad = true;

    //  Primer valor para la comprobacion 
    size_t firstElement = vector[0].size();

    /* Iterar entre el vector de vectores para saber si todos coinciden */
    for (size_t i = 0; i < vector.size(); i++)
    {
        /* Iterar dentro del vector */
        for (size_t j = 1; j < vector[i].size(); j++)
        {
            if (firstElement != vector[i].size())
            {
                integridad = false;
                break;
            }   
        }
    }
    
    //  Retornar resultado
    return integridad;
}

/**
    * @brief Metodo que verifica si dos matrices son de igual dimensión o dimensiones
    * 
    * @return true: Si las matrices son de iguales dimensiones
    * @return false: Si las matrices no son de iguales dimensiones
*/
bool Matriz::verificarIgualdad(const Matriz& vec) const{
    //  Igualdad de las matrices
    /* Se supondra que son iguales hasta que se demuestre lo contrario */
    bool igualdad = true;

    //  Si el size de cada vector no conincide, la igualdad sera falsa
    if(vector.size() != vec.getVector().size() && vector[0].size() != vec.getVector()[0].size()){
        //  No coninciden por lo cual es falsa la igualdad
        igualdad = false;
    }
    
    //  Retornamos si son iguales
    return igualdad;
}

/**
 * @brief Verifica si es posible la multiplciación de las matrices
 * 
 * @param vec 
 * @return true: En caso de que sea posible multiplicar 
 * @return false: En caso de que no sea posible multiplicar
 */
bool Matriz::verificarPosibleMultiplicacion(const Matriz& vec) const{
    //  Igualdad de n = q
    /*  Donde, teniendo una matriz A[m][n] y una matriz B[p][q], es
        posible su multiplicacion si n es igual a p
     */
    /* Se supondra que son compatibles hasta que se demuestre lo contrario */
    bool verificacion = true;
    
    //  Comprobación
    if(vector[0].size() != vec.vector.size()){
        verificacion = false;
    }
    
    //  Retorno de resultado
    return verificacion;
}

/**
    * @brief Verifica si la matriz es cuadrada
    * @details Verificar si la matriz tienes las mismas dimensiones tanto en el eje i como en el j
    * 
    * @return true: Si la matriz es cuadrada
    * @return false: Si la matriz no es cuadrada
*/
bool Matriz::verificarCuadradoMatriz(const Matriz& vec) const{
    //  Se asumira que es cuadrada
    bool cuadrado = true;

    //  En caso de que no lo sea
    /* Como ya se verificara la integridad, se dara paso solo a la igual de los lados */
    if(vec.vector.size() != vec.vector[0].size()){
        cuadrado = false;
        return cuadrado;
    }

    return cuadrado;
}

/**
 * @brief 
 * 
 * @param os 
 * @param vec 
 * @return std::ostream& 
 */
std::ostream& operator <<(std::ostream& os, const Matriz& vec){
    //  Alias para la matriz
    std::vector<std::vector<Fraccion>> vector = vec.getVector();

    std::stringstream ss;
    
    //Construcción del mensaje
    for (size_t i = 0; i < vector.size(); i++)
    {
        ss << "{";
        for (size_t j = 0; j < vector[i].size(); j++)
        {
            // Iteracion y construccion del mensaje, en caso de llegar al ultimo elemento:
                /* No se imprimira el espacio */
            ss << vector[i][j] << (j == vector[i].size() - 1 ? "":  "\t");
        }
        ss << "}";
        ss << std::endl; 
    }

    //  "Asignacion" del mensaje
    os << ss.str();

    //  Retorno
    return os;
    
}

Matriz Matriz::operator+(const Matriz& vec) const{
    //  Confirmar que las matrices sean iguales
    if (!verificarIgualdad(vec))
    {
        std::cout << "Las matrices no tiene las mismas dimenciones"<< std::endl;
        return Matriz();
    }

    //  Copiar la matriz de vec para tener su alias (simplificar lectura)
    std::vector<std::vector<Fraccion>> vectorMatriz = vec.getVector();

    //  Vector que almacenara el resultado y que sera retornado
    std::vector<std::vector<Fraccion>> resultado;

    //  Vector para el resultado de la fila
    std::vector<Fraccion> fila;

    //  Suma de las matrices
    //  Recorrer de x -> primer primer vector
    for (size_t i = 0; i < this-> vector.size(); i++)
    {
        //  Recorrer de y -> Segundo vector dentro del primer vector
        for (size_t j = 0; j < this -> vector[i].size(); j++)
        {
            //  Realizar la operacion para despues hacer un push al vector de vectores (Pusheando el valor en fila)
            fila.push_back(this -> vector[i][j] + vectorMatriz[i][j]);
        }
        //  Push para el resultado de la suma
        resultado.push_back(fila);
        //  Limpiar los valores de esta "bandera"
        fila.clear();
    }

    //  Objeto matriz para el retorno
    Matriz matriz(resultado);
    

    //  Retornar el resultado de la suma como un objeto matriz
    return matriz;
}

Matriz Matriz::operator-(const Matriz& vec) const{
    //  Confirmar que las matrices sean iguales
    if (!verificarIgualdad(vec))
    {
        std::cout << "Las matrices no tiene las mismas dimenciones"<< std::endl;
        return Matriz();
    }

    //  Copiar la matriz de vec para tener su alias (simplificar lectura)
    std::vector<std::vector<Fraccion>> vectorMatriz = vec.getVector();

    //  Vector que almacenara el resultado y que sera retornado
    std::vector<std::vector<Fraccion>> resultado;

    //  Vector para el resultado de la fila
    std::vector<Fraccion> fila;

    //  Resta de las matrices
    //  Recorrer de x -> primer primer vector
    for (size_t i = 0; i < this-> vector.size(); i++)
    {
        //  Recorrer de y -> Segundo vector dentro del primer vector
        for (size_t j = 0; j < this -> vector[i].size(); j++)
        {
            //  Realizar la operacion para despues hacer un push al vector de vectores (Pusheando el valor en fila)
            fila.push_back(this -> vector[i][j] - vectorMatriz[i][j]);
        }
        //  Push para el resultado de la suma
        resultado.push_back(fila);
        //  Limpiar los valores de esta "bandera"
        fila.clear();
    }

    //  Objeto matriz para el retorno
    Matriz matriz(resultado);
    

    //  Retornar el resultado de la suma como un objeto matriz
    return matriz;
}

/**
    * @brief Multiplicación de matrices
    * 
    * @param vec Objeto Matriz
    * @return Matriz: resultado de la multiplicacion
*/
Matriz Matriz::operator*(const Matriz& vec) const{
    //  Comprobaremos si son compatibles
    if(!verificarPosibleMultiplicacion(vec)){
        //  No es posible
        std::cout<< "No es posible la multiplciación de estas matrices" << std::endl;

        //  Retornamos un objeto Matriz vacio
        return Matriz();
    }

    //  Resultado de la sumatoria
    Fraccion sum;

    //  Resultado de la fila
    std::vector<Fraccion> fila;
    
    //  Resultado de la multiplcacion
    std::vector<std::vector<Fraccion>> resultado;



    // ----- En proceso el algoritmo -----

    for (size_t i = 0; i < vector.size(); i++)
    {
        for (size_t j = 0; j < vec.vector[i].size(); j++)
        {
            for (size_t k = 0; k < vec.vector.size(); k++)
            {
                sum = sum + (vector[i][k] * vec.vector[k][j]);
            }
            
            //  Pusheamos la fila
            fila.push_back(sum);

            //  Limpiamos el valor de sum
            sum.limpiar();         
        }
            //  Pusheamos al resultado
            resultado.push_back(fila);

            //  Limpiamos fila }
            fila.clear();
    }
    

    Matriz matriz(resultado);

    return matriz;
}

/**
 * @brief Multiplicacion por un escalar
 * 
 * 
 * @param escalar Entero que multiplicara a toda la matriz
 * @return Matriz Objeto Matriz 
 */
Matriz Matriz::operator* (int escalar) const{
    //  Matriz para el resultado
    std::vector<std::vector<Fraccion>> resultado;
    
    //  Matriz para el resultado por fila  
    std::vector<Fraccion> fila;

    //  Multiplicació por un escalar
    for (size_t i = 0; i < vector.size(); i++)
    {
        for (size_t j = 0; j < vector[i].size(); j++)
        {
            //  Operacion con la matriz, con el push para la fila
            fila.push_back(vector[i][j] * escalar);
        }
        //  Push para la fila en el resultado
        resultado.push_back(fila);
        
        //  Limpiamos el vector fila para la siguiente iteración
        fila.clear();
    }

    //  Creacion del objeto matriz para su retorno
    Matriz matriz(resultado);

    //  Retorno del resultado
    return matriz;
}

Matriz Matriz::operator *(const Fraccion& frac) const {
    //  Matriz para el resultado
    std::vector<std::vector<Fraccion>> resultado;
    
    //  Matriz para el resultado por fila  
    std::vector<Fraccion> fila;

    //  Multiplicació por un escalar
    for (size_t i = 0; i < vector.size(); i++)
    {
        for (size_t j = 0; j < vector[i].size(); j++)
        {
            //  Operacion con la matriz, con el push para la fila
            fila.push_back(vector[i][j] * frac);
        }
        //  Push para la fila en el resultado
        resultado.push_back(fila);
        
        //  Limpiamos el vector fila para la siguiente iteración
        fila.clear();
    }

    //  Creacion del objeto matriz para su retorno
    Matriz matriz(resultado);

    //  Retorno del resultado
    return matriz;
}

/**
    * @brief Divide la matriz en cofactores a partor de una coordenada i, j que se ingerese 
    * @details  Los indices que recibe son los valores i, j que se usan en matematicas, es decir
    *           se usan a partor del i = 1 y j = 1 como valores minimos, no desde el 0
    * @param i Es la posicion i de la matriz para determinar el cofactor
    * @param j Es la posicion j de la matriz para determinar el cofactor
    * @return Matriz: Cofactor resultante
*/
Fraccion Matriz::mCofactor(const Matriz& vec, int imatriz, int jmatriz) const{
    //  En caso de que la matriz sea de 2x2 devolver directamente el resultado
    if(vec.vector.size() == 2){
        return((vec.vector[0][0] * vec.vector[1][1]) - (vec.vector[1][0] * vec.vector[0][1]));
    }

    //  Se le resta uno, ya que imatriz y jmatriz son los indices de una matriz representados en matematicas,
    //  Por lo cual inician en 1, 1 , 1, 2 y así sucesivamente

    imatriz -= 1;
    jmatriz -= 1;

    //  Matriz para el resultado
    std::vector<std::vector<Fraccion>> resultado;
    
    //  Matriz para la fila
    std::vector<Fraccion> fila;

    //  Algoritmo para la separacion por cofactor
    for (size_t i = 0; i < vec.vector.size(); i++)
    {
        for (size_t j = 0; j < vec.vector[i].size(); j++)
        {
            //  Si no es igual a i o j se agregara a al vector "fila"  
            if(i != imatriz && j != jmatriz){
                fila.push_back(vec.vector[i][j]);
                
            }
        }

        //  En caso de que "fila" este vacio que no se haga el push
        if(!fila.empty()){
            resultado.push_back(fila);
        }

        //  Limpiar "fila"
        fila.clear();
    }
    //  Fin al algoritmo

    if (resultado.size() == 2)
    {
        return ((resultado[0][0] * resultado[1][1]) - (resultado[1][0] * resultado[0][1])) * (static_cast<int>(pow(-1, (imatriz + 1) + (jmatriz + 1))));
    }

    return determinante(Matriz(resultado)) * (static_cast<int>(pow(-1, (imatriz + 1) + (jmatriz + 1))));
}

Fraccion Matriz::determinante(const Matriz& vec) const{
    //  En caso de que la matriz no sea "cuadrada" retornar una matriz vacia
    if(!verificarCuadradoMatriz(vec)){
        //  Mensaje de "error"
        std::cout << "La matriz no es cuadrada, por lo cual no cuenta con una valor de determinante" << std::endl;

        return Fraccion();
    }

    if(vec.vector.size() == 2){
        return mCofactor(vec, 1, 1);
    }

    //  Resultado de la sumatoria
    Fraccion sumatoria;

    for (size_t j = 0; j < vec.vector[0].size(); j++)
    {
        sumatoria = sumatoria + (vec.vector[0][j] * mCofactor(vec.vector, 1, j + 1));
    }

    return sumatoria;
}

/**
 * @brief Devolvera la matriz transpuesta 
 * 
 * @return Matriz 
 */
Matriz Matriz::transpuesta(const Matriz& vec) const{
    //Resultado de la matriz transpuesta
    std::vector<std::vector<Fraccion>> transpuesta;

    //Resultado por fila 
    std::vector<Fraccion> fila;

    for (size_t i = 0; i < vec.vector.size(); i++)
    {
        for (size_t j = 0; j < vec.vector[0].size(); j++)
        {
            fila.push_back(vec.vector[j][i]);
        }
        //  Push para el resultado
        transpuesta.push_back(fila);

        //  Limpía de datos de fila
        fila.clear();
    }
    
    return Matriz(transpuesta);
}

Matriz Matriz::inversa() const{
    //  En caso de que el determinante sea igual a cero, no sera posible
    if(determinante(vector) == 0){
        std::cout << "La matriz no cuenta con inversa" << std::endl;
        return Matriz();
    }

    //  Matriz resultado de la inversa
    std::vector<std::vector<Fraccion>> trans;

    //  Resultado por fila 
    std::vector<Fraccion> fila;

    //  Cofactor
    Matriz cofac;

    //  Determinante de la matriz
    Fraccion deter;


    //  Primer etapa del algoritmo
    for (size_t i = 0; i < vector.size(); i++)
    {
        for (size_t j = 0; j < vector[0].size(); j++)
        {
            //  Determinante del cofactor
            cofac = cofactor(vector, i + 1, j + 1);
            deter = determinante(cofac);

            //  Resultado para la fila
            fila.push_back(deter * (static_cast<int>(pow(-1, (i + 1) + (j + 1)))));
        }

        //  Push para el resultado
        trans.push_back(fila);

        //  Limpia de fila
        fila.clear();
    }
    //  Fin de la primera etapa


    //  Segunda etapa del algoritmo
    Matriz adjuntaT = transpuesta(Matriz(trans));
    Fraccion detVector = determinante(vector); 

    //  Liberamos trans
    trans.clear();

    for (size_t i = 0; i < adjuntaT.vector.size(); i++)
    {
        for (size_t j = 0; j < adjuntaT.vector[0].size(); j++)
        {
            //  Resultado para la fila
            fila.push_back(Fraccion(1, detVector.getNumerador() / detVector.getDenominador()) * adjuntaT.vector[i][j]);
        }

        //  Push para el resultado
        trans.push_back(fila);

        //  Limpia de fila
        fila.clear();
    }
    //  Fin de la segunda etapa

    return Matriz(trans); 
}

/*
    Poco despues se va a actualizar el algoritmo del determinante para su uso mas adelante, pero por el momento,
    al terminar la inversa se subira a GitHub para mantener un respaldo de este proyecto
 */