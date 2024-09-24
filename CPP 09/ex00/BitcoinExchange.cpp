/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:43 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/24 10:35:02 by dmanuel-         ###   ########.fr       */
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
    if(!getline(fstream,buffer) || buffer != "date,exchange_rate")
    {
        std::cout << "Wrong data.csv type of file!\n";
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

static float getRate(std::map<std::string, std::string> map, const std::string& date, const std::string& rate)
{
    for (std::map<std::string, std::string>::reverse_iterator it = map.rbegin();
		 it != map.rend(); ++it)
    {
        if (it->first <= date)
            return (convertString<float>(rate) * convertString<float>(it->second));
    }
    throw(BitcoinExchange::BitcoinExchangeException());
}

static void convertRates(const std::map<std::string, std::string>& map, const std::string& buffer)
{
    std::stringstream ssBuffer(buffer);
    std::string DateRate[2];
    float flo;

    getline(ssBuffer, DateRate[0],'|');
    while(DateRate[0][DateRate[0].size() -1] == ' ')
        DateRate[0].erase(DateRate[0].end() - 1);
        
    getline(ssBuffer, DateRate[1]);
    while (DateRate[1][0] == ' ')
        DateRate[1].erase(0,1);
    if (DateRate[1].empty())
    {
        std::cerr << "Error: bad input => " << buffer << std::endl;
        return ;
    }
    flo = convertString<float>(DateRate[1]);
    if (validDate(DateRate[0]) && validRate(flo))
    {
        try
        {
            std::cout << std::fixed<< std::setprecision(2);
            std::cout << DateRate[0] << " => " << flo << " = ";
            std::cout << getRate(map, DateRate[0], DateRate[1]) << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what();
            std::cerr << "Error: bad input => " << DateRate[0] << std::endl;
        }
        
    }
}

void BitcoinExchange::exchangeBitcoin(const std::map<std::string,std::string>& map, const std::string& file)
{
    std::fstream fstream;
    std::string buffer;

    openfile(file, &fstream);
    if (!fstream.is_open())
        return ;
    if (!getline(fstream, buffer) || buffer != "date | value")
    {
        std::cout << "Error: " << file << ": empty or unsupported file\n";
        fstream.close();
        return ;
    }
    while (getline(fstream, buffer))
        convertRates(map, buffer);
    fstream.close();
}

const char* BitcoinExchange::BitcoinExchangeException::what() const throw()
{
    return ("Error: Date is too low.\n");
}

