/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:35:04 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/24 10:30:12 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <vector>

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool validDate(const std::string& date)
{
    int dates[3];
    bool valid;

    std::string Buffer[3];
    std::stringstream ssBuffer(date);

    for (int i = 0; i < 3; i++)
    {
        getline(ssBuffer, Buffer[i], '-');
        dates[i] = convertString<int>(Buffer[i]);
    }
    if (dates[0] < 2009 || dates[0] > 2022)
        valid = false;
    if(dates[1] < 1 || dates[1] > 12)
        valid = false;
    if (dates[2] < 1 || 
            (dates[1] == 2 && dates[2] > (isLeapYear(dates[0]) ? 29 : 28)) ||
            (dates[2] > 28 + (dates[1] + 
            (dates[1] / 8) % 2 + 2 % dates[1] + 2 * (1 / dates[1]))))
        valid = false;
    if(!valid)
        std::cerr << "Error: bad input => " << dates << std::endl;
    return (valid);
}

void openfile(const std::string& file, std::fstream* fstream)
{
    if (fstream->is_open())
        fstream->close();
    fstream->open(file.c_str(), std::ios::in);
    if(!fstream->is_open())
    {
        fstream->close();
        std::cerr << "Error opening file!\n";
    }
}

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cerr << "Format: /btc <input_file>\n";
        return (1);
    }
    std::map<std::string, std::string> map;

    BitcoinExchange::readData(map);
    BitcoinExchange::exchangeBitcoin(map,argv[1]);

    return 0;
}
