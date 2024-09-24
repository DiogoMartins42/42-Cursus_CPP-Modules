/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:41 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/24 10:19:32 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <limits>
#include <map>
#include <iomanip>

template <typename T>
T convertString(const std::string& string)
{
    T converted;
    std::stringstream ss(string);

    ss >> converted;
    return (converted);
}

template <typename T>
bool validRate(T& rate)
{
    if (rate < std::numeric_limits<int>::min() || rate > std::numeric_limits<int>::max())
        return false;
    if (rate < 0)
    {
        std::cerr << "Error: not a positive number.\n";
        return (false);
    }
    if (rate > 1000)
    {
        std::cerr <<"Error: too large number.\n";
        return false;
    }
    return true;
    
}

class BitcoinExchange
{
    public:
            BitcoinExchange();
            BitcoinExchange(const BitcoinExchange&);
            BitcoinExchange& operator=(const BitcoinExchange&);
            ~BitcoinExchange();

            static void readData(std::map<std::string, std::string>& map);
            static void exchangeBitcoin(const std::map<std::string,std::string>& map, const std::string& file);

            class BitcoinExchangeException : public std::exception
            {
                public:
                        virtual const char* what() const throw();
            };
            
};

void openfile(const std::string& file, std::fstream* fstream);

bool validDate(const std::string& date);