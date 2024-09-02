/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:26:53 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/29 10:26:56 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;

i->makeSound();
j->makeSound();
meta->makeSound();

delete meta;
delete j;
delete i;

const WrongAnimal* wrong = new WrongAnimal();
const WrongAnimal* wrongcat = new WrongCat();

std::cout << wrong->getType() << " "<< std::endl;
std::cout << wrongcat->getType() << " "<< std::endl;

wrong->makeSound();
wrongcat->makeSound();

delete wrong;
delete wrongcat;

return 0;
}
