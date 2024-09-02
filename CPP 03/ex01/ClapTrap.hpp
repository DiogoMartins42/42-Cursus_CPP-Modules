/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 10:35:37 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/27 10:35:38 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <cmath>

class ClapTrap
{
    protected:
        std::string name;
        int HitPoints;
        int Energy;
        int Attack;

    public:
        ClapTrap ();
        ClapTrap (const std::string name);
        ClapTrap (const ClapTrap &a);
        ClapTrap& operator = (const ClapTrap &a);
        ~ClapTrap ();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
