/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 10:35:22 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/27 10:35:24 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void)
{
    ClapTrap a;
    ClapTrap b("Named");
    ClapTrap reparing;

    ScavTrap Scav("Scav");
    ScavTrap repairScav("repairScav");

    FragTrap Frag("Frag");
    FragTrap repairFrag("repairFrag");


    a.attack("Named");
    b.beRepaired(2147483647);
    a.takeDamage(2147483647);
    a.attack("Tomato");

    reparing.beRepaired(1);
    reparing.beRepaired(1);

    Scav.attack("Clap");
    Scav.takeDamage(200);
    repairScav.beRepaired(10);
    Scav.attack("Clap");
    Scav.guardGate();

    Frag.attack("Potato");
    Frag.beRepaired(10);
    Frag.takeDamage(300);
    Frag.attack("potato");
    Frag.highFivesGuys();
}