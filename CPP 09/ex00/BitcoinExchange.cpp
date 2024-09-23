/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:43 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/23 14:50:09 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange&)
{
    
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange&)
{
    return(*this);    
}

BitcoinExchange::~BitcoinExchange()
{
    
}

void BitcoinExchange::readData(std::map<std::string, std::string>& map)
{
    std::fstream fstream;
    std::string buffer;

    openfile("data.csv", &fstream);
    if (!fstream.is_open())
        return ;
    if(!getline(fstream,buffer) || buffer != "data,exchange_rate")
    {
        std::cout << "Wrong data.cvs type of file!\n";
        fstream.close();
    }
    while(getline(fstream, buffer))
    {
        std::stringstream ssBuffer(buffer);
        std::string rates[2];

        getline(ssBuffer,rates[0],',');
        getline(ssBuffer, rates[1]);
        map[rates[0]] = rates[1];
    }
    fstream.close();
}