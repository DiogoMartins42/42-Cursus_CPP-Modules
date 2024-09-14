/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:09:53 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/14 14:04:54 by dmanuel-         ###   ########.fr       */
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

static void results(const int* num, const float* flo, const double* doub)
{
    std::stringstream c, i, f, d;

    if (num && *num < std::numeric_limits<int>::max() && *num > std::numeric_limits<int>::min() && (*num >= 0 && *num < 256))
    {
        if (std::isprint(*num))
            c << "'" << char(*num) << "'";
        else 
            c << "Non displayable";
    }
    else
        c << "impossible";
    
    if (num && *num < std::numeric_limits<int>::max() && *num > std::numeric_limits<int>::min())
        i << *num;
    else
        i << "impossible";
    f << *flo;
    if (*flo != std::numeric_limits<float>::infinity() && *flo != std::numeric_limits<float>::quiet_NaN() && int(*flo * 10) % 10 == 0)
        f << ".0";
    d << *doub;
    if (*doub != std::numeric_limits<float>::infinity() && *doub != std::numeric_limits<float>::quiet_NaN() && int(*doub * 10) % 10 == 0)
        d << ".0";
    std::cout << "char: " << c.str() << std::endl;
    std::cout << "int: " << i.str() <<std::endl;
    std::cout << "float " << f.str() << "f" << std::endl;
    std::cout << "double: " << d.str() << std::endl;
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
        d = std::numeric_limits<double>::quiet_NaN();
        results(0, &f, &d);
    }
    else if (literal == "inf" || literal == "inff" || literal == "+inf" || literal == "+inff")
    {
        f = std::numeric_limits<float>::infinity();
        d = std::numeric_limits<double>::infinity();
        results(0, &f, &d);
    }
    else if (literal == "-inf" || literal == "-inff")
    {
        f = -std::numeric_limits<float>::infinity();
        d = -std::numeric_limits<double>::infinity();
        results(0, &f, &d);
    }
    else
        results(&i, &f, &d);
}

