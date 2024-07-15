/**
 * @file StringUtils.cpp
 * @author Ulises (rodriguezsolorzanoulises@gmail.com)
 * @brief implemnentacion de StringUtils.h
 * @version 0.1
 * @date 2024-07-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "utils/StringUtils.h"
#include <sstream>

std::vector<std::string> StringUtils::split(const std::string& cadena, char caracter) {
    std::vector<std::string> tokens;
    std::istringstream iss(cadena);
    std::string token;

    while (std::getline(iss, token, caracter)) {
        tokens.push_back(token);
    }

    return tokens;
}

std::string StringUtils::strip(const std::string& cadena){
    std::string resultado;
    
    for (char c : cadena) {
        if (!isspace(c) && c != '\t') {
            resultado += c;
        }
    }

    return resultado;
}
