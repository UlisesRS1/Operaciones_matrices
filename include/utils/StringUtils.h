/**
 * @file StringUtils.h
 * @author Ulises (rodriguezsolorzanoulises@gmail.com)
 * @brief Clase con metodos utiles para la manipulacion de Strings
 * @version 0.1
 * @date 2024-07-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef STRINGUTILS_H
#define STRINGUTILS_H

#include<vector>
#include<string>

class StringUtils
{
public:
    /**
     * @brief Devolvera un vector con uno o varios strings separados por "caracter"
     * 
     * @param cadena Cadena original 
     * @param caracter Caracter con el cual se cortara el string
     * @return std::vector<std::string> 
     */
    static std::vector<std::string> split(const std::string& cadena, char caracter);
};

#endif STRINGUTILS_H