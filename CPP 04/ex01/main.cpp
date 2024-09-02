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
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    int animalsnumber = 10;
    const Animal* animals[animalsnumber];

    for (int i = 0; i < animalsnumber/2; ++i){
        animals[i] = new Dog();
    }
        
    for (int i = animalsnumber / 2; i < animalsnumber; ++i)
        animals[i] = new Cat();    
    for (int i = 0; i< animalsnumber; ++i)
    {
        std::cout << animals[i]->getType() << " makes " ;
        animals[i]->makeSound();
    }
    for (int i = 0; i < animalsnumber; ++i)
        delete animals[i];

    Dog basic;
    Dog tmp = basic;

    return 0;
}
