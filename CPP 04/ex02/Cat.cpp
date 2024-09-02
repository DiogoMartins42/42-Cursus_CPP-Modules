/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:28:24 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/29 10:28:25 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brain(new Brain()){
    std::cout << "Cat Default Constructor\n";
    this->type = "Cat";
}

Cat::Cat(const Cat& val){
    std::cout << "Cat Copy Constructor\n";
    *this = val;
}

Cat& Cat::operator=(const Cat& val){
    if (this != &val){
        this->brain = new Brain(*val.brain);
        this->type = val.type;
    }
    std::cout << "Cat Copy Operator\n";
    return (*this);
}

Cat::~Cat(){
    std::cout << "Cat Destructor\n";
    delete this->brain;
}

void Cat::makeSound(void) const{
    std::cout << "Meow Meow\n";
}
