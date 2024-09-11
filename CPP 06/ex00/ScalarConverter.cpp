/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:09:53 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/11 15:04:56 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>
#include <limits>

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter&)
{
    
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter&)
{
    return (*this);
}
ScalarConverter::~ScalarConverter()
{
    
}

static void convertInt(const std::string& input, int* i, float* f, double* d)
{
    std::stringstream ss(input);
    
    ss >> *i;
    *d = static_cast<double>(*i);
    *f = static_cast<float>(*i);
}

static void convertFloat(const std::string& input, int* i, float* f, double* d)
{
    std::stringstream ss(input);
    
    ss >> *f;
    *i = static_cast<int>(*f);
    *d = static_cast<double>(*f);
}

static void convertDouble(const std::string& input, int* i, float* f, double* d)
{
    std::stringstream ss(input);
    
    ss >> *d;
    *i = static_cast<int>(*d);
    *f = static_cast<float>(*d);
}

static int convertInitial(const std::string& literal, int* i, float* f, double* d)
{
    if(literal.length() == 1 && !isdigit(literal[0]))
    {
        *i = static_cast<unsigned char>(literal[0]);
        *f = static_cast<unsigned char>(literal[0]);
        *d = static_cast<unsigned char>(literal[0]);
        return (0);
    }
    if ((literal.find_first_not_of("123456789.") == std::string::npos && 
        literal.find_first_of('.') == literal.find_last_of('.')))
        convertDouble(literal, i, f, d);
    else if ((literal.find_first_not_of("123456789.") == std::string::npos && 
                literal.find_first_of('.') == literal.find_last_of('.') && 
                literal.find_first_of('f') == literal.length() -1))
        convertFloat(literal, i, f, d);
    else if (isprint(literal[0]))
        convertInt(literal, i, f, d);
    else
    {
        std::cout << "Invalid input\n";
        return (1);
    }
    return (0);
}

void ScalarConverter::convert(const std::string& literal)
{
    int i = 0;
    float f = 0;
    double d = 0;
    
    if (convertInitial(literal, &i, &f, &d))
        return;
    if (literal == "nan" || literal == "+nan")
    {
        f = std::numeric_limits<float>::quiet_NaN();
    }
}