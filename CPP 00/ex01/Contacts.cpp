/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:58:18 by dmanuel-          #+#    #+#             */
/*   Updated: 2023/10/25 12:58:18 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::_getInput(std::string str) const {
    std::string input = "";
    bool    valid = false;
    do
    {
        std::cout << str << std::flush;
        std::getline(std::cin, input);
        if (std::cin.good() && !input.empty())
            valid = true;
        else {
            std::cin.clear();
            std::cout << "Invalid" << std::endl;
        }
    } while(!valid);
    return (input);
}

void Contact::init(void){
    std::cin.ignore();
    this->_firstName = this->_getInput("Enter first name: ");
    this->_lastName = this->_getInput("Enter last name: ");
    this->_nickname = this->_getInput("Enter nickname: ");
    this->_phoneNumber = this->_getInput("Enter phone number: ");
    this->_darkestSecret = this->_getInput("Enter darkestSecret: ");
    std::cout << std::endl;
}

std::string Contact::_printLen(std::string str) const {
    if (str.length() > 10)
        return str.substr(0,9) + ".";
    return str;
}

void Contact::setIndex(int i){
    this->_index = i;
}

void Contact::view(int index) const{
    if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
        return ;
    std::cout << "|" << std::setw(10) << index << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_firstName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_lastName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_printLen(this->_nickname) << std::flush;
    std::cout << "|" << std::endl;
}

void    Contact::display(int index) const {
    if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
        return ;
    std::cout << std::endl;
    std::cout << "---> Contact #" << index << " <---" <<std::endl;
    std::cout << "First Name:\t" << this->_firstName << std::endl;
    std::cout << "Last Name:\t" << this->_lastName << std::endl;
    std::cout << "Nickname:\t" << this->_nickname << std::endl;
    std::cout << std::endl;
}