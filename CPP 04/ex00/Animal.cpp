/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:27:49 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/29 10:27:52 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal Default Constructor\n";
    this->type = "Random Animal";
}

Animal::Animal(const Animal& val){
    std::cout << "Animal Copy Constructor\n";
    *this = val;
}

Animal& Animal::operator=(const Animal& val){
    if (this != &val)
        this->type = val.type;
    return (*this);
}

Animal::~Animal(){
    std::cout << "Animal Destructor\n";
}

void Animal::makeSound(void) const{
    std::cout << "Random Animal Noises\n";
}

std::string Animal::getType(void) const {
    return (this->type);
}