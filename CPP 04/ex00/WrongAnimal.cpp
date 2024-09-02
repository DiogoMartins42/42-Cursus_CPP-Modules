/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:27:49 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/29 10:27:52 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal Default Constructor\n";
    this->type = "Random WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& val){
    std::cout << "WrongAnimal Copy Constructor\n";
    *this = val;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& val){
    if (this != &val)
        this->type = val.type;
    return (*this);
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Destructor\n";
}

void WrongAnimal::makeSound(void) const{
    std::cout << "Random WrongAnimal Noises\n";
}

std::string WrongAnimal::getType(void) const {
    return (this->type);
}