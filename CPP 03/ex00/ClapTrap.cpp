/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 10:35:33 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/27 10:35:35 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
{
    std::cout<<"Base Constructor\n";
    this->name = "ClapTrapBasic";
    this->HitPoints = 10;
    this->Energy = 10;
    this->Attack = 0;
}

ClapTrap::ClapTrap(const std::string name)
{
    std::cout << "Named Contructor\n";
    this->name = name;
    this->HitPoints = 10;
    this->Energy = 10;
    this->Attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap& change)
{
    std::cout << "Copy Contructor\n";
    this->name = change.name;
    this->HitPoints = change.HitPoints;
    this->Energy = change.Energy;
    this->Attack = change.Attack;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& change)
{
    if (this != &change)
    {
        this->name = change.name;
        this->HitPoints = change.HitPoints;
        this->Energy = change.Energy;
        this->Attack = change.Attack;
    }
    std::cout << "Copy Assign\n";
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor\n";
}

void ClapTrap::attack(const std::string& target)
{
    if(this->Energy <= 0)
    {
        std::cout << this->name + " has no energy left.\n";
        return ;
    }
    if(this->HitPoints <= 0)
    {
        std::cout << this->name + " has no Hit Points left.\n";
        return ;
    }
    ClapTrap damaging;
    damaging = ClapTrap(target);
    this->Energy--;
    std::cout << this->name + " attacks " << damaging.name + "\n";
    damaging.takeDamage(this->Attack);
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HitPoints)
    {
        this->HitPoints -= amount;
        std::cout << this->name + " took " << amount << " point of damage.\n";  
    }
    else
        std::cout << this->name + " has not HitPoints.\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Energy)
    {
        this->HitPoints += amount;
        this->Energy--;
        std::cout << this->name + " reparied it self with " << amount << " Hit points.\n";
    }
    else
        std::cout << this->name + " has no Energy left\n";
}