/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:28:06 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/29 10:28:08 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog Default Constructor\n";
    this->type = "Dog";
}

Dog::Dog(const Dog& val){
    std::cout << "Dog Copy Constructor\n";
    *this = val;
}

Dog& Dog::operator=(const Dog& val){
    if (this != &val)
        this->type = val.type;
    return (*this);
}

Dog::~Dog(){
    std::cout << "Dog Destructor\n";
}

void Dog::makeSound(void) const{
    std::cout << "Woof Woof\n";
}
