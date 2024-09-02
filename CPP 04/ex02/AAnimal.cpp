/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:27:49 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/29 10:27:52 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){
    std::cout << "AAnimal Default Constructor\n";
    this->type = "AAnimal\n";
}

AAnimal::AAnimal(const AAnimal& val){
    std::cout << "AAnimal Copy Constructor\n";
    *this = val;
}

AAnimal& AAnimal::operator=(const AAnimal& val){
    if (this != &val)
        this->type = val.type;
    return (*this);
}

AAnimal::~AAnimal(){
    std::cout << "AAnimal Destructor\n";
}

void AAnimal::makeSound(void) const{
    std::cout << "Random AAnimal Noises\n";
}

std::string AAnimal::getType(void) const {
    return (this->type);
}