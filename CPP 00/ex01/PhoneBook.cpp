/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:47:37 by dmanuel-          #+#    #+#             */
/*   Updated: 2023/10/25 12:47:37 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void    PhoneBook::intro(void) const {
    std::cout << std::endl;
    std::cout << "Your PhoneBook" << std::endl;
    std::cout <<  std::endl;
    std::cout << "ADD\t: Adds a contact" << std::endl;
    std::cout << "SEARCH\t: Search for contact" << std::endl;
    std::cout << "EXIT\t: Exits Phonebook" << std::endl;
    std::cout << std::endl;
}

void    PhoneBook::addContact(void){
    static int i;
    this->_contacts[i % 8].init();
    this->_contacts[i % 8].setIndex(i % 8);
    i++;
}

void PhoneBook::printContacts(void) const{
    std::cout << "---Contacts---" << std::endl;
    for (size_t i = 0; i < 8; i++)
        this->_contacts[i].view(i);
    std::cout << std::endl;
}

int PhoneBook::_readInput() const {
    int input = -1;
    bool    valid = false;
    do
    {
        std::cout << "Contact Index: " <<std::flush;
        std::cin >> input;
        if (std::cin.good() && (input >= 0 && input <= 8)){
            valid = true;
        } else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }
    } while (!valid);
    return (input);
}

void    PhoneBook::search(void) const {
    int i = this->_readInput();
    this->_contacts[i].display(i);
}