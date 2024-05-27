/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:31:19 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/27 14:31:20 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    Energy = 100;
    Attack = 30;
    std::cout << "Frag Default Constructor\n";
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    std::cout << "Frag Named Constructor\n";
    Energy = 100;
    Attack = 30;
}

FragTrap::FragTrap(const FragTrap& change) : ClapTrap(change) {
    std::cout << "Frag Copy Consructor\n";
}

FragTrap::~FragTrap(){
    std::cout << "Frag Destructor\n";
}

FragTrap& FragTrap::operator=(const FragTrap& change) {
    if (this != &change)
        ClapTrap::operator=(change);
    std::cout << "Frag Copy Assign\n";
    return *this;
}

void FragTrap::highFivesGuys(){
    std::cout << "Frag high fives!\n";
}
