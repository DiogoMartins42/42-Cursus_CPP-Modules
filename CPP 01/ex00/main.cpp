/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 19:03:19 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/03/28 19:03:20 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *newZombie(std::string name){
    return(new Zombie(name));
}

void    randomChump(std::string name){
    Zombie chump(name);
    chump.announce();
}

int main(void) {
    std::string name;

    std::cout << "Creating a stack Zombie!" << std::endl;
    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;

    Zombie StackZombie(name);
    StackZombie.announce();

    std::cout << "Creating a heap Zombie!" << std::endl;
    std::cout << "Zombie name: " << std::flush;
    std::cin >> name;

    Zombie *HeapZombie = newZombie(name);
    HeapZombie->announce();
    delete HeapZombie;

    std::cout << "Calling a chump" << std::endl;
    randomChump("Chump");
    return 0;
}