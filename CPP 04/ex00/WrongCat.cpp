/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:28:24 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/29 10:28:25 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat Default Constructor\n";
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& val){
    std::cout << "WrongCat Copy Constructor\n";
    *this = val;
}

WrongCat& WrongCat::operator=(const WrongCat& val){
    if (this != &val)
        this->type = val.type;
    return (*this);
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructor\n";
}

void WrongCat::makeSound(void) const{
    std::cout << "Meow Meow\n";
}
