/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:15:51 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/27 12:15:52 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
    std::cout << "Scav Default Constructor\n";    
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    std::cout << "Scav Named Constructor\n";
}

ScavTrap::ScavTrap(const ScavTrap& change) : ClapTrap(change) {
    std::cout << "Scav Copy Consructor\n";
}

ScavTrap::~ScavTrap(){
    std::cout << "Scav Destructor\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& change) {
    if (this != &change)
        ClapTrap::operator=(change);
    std::cout << "Scav Copy Assign\n";
    return *this;
}

void ScavTrap::guardGate(){
    std::cout << "Scav is now in Gate Keeper mode!\n";
}
