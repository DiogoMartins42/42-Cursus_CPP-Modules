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

int main (void)
{
    ClapTrap a;
    ClapTrap b("Named");
    ClapTrap reparing;

    a.attack("Named");
    b.beRepaired(2147483647);
    a.takeDamage(2147483647);
    a.attack("Tomato");

    reparing.beRepaired(1);
    reparing.beRepaired(1);
    reparing.beRepaired(1);
    reparing.beRepaired(1);
    reparing.beRepaired(1);
    reparing.beRepaired(1);
    reparing.beRepaired(1);
    reparing.beRepaired(1);
    reparing.beRepaired(1);
    reparing.beRepaired(1);
    reparing.beRepaired(1);
    reparing.beRepaired(1);
    reparing.beRepaired(1);
}