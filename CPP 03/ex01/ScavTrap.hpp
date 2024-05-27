/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:15:55 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/27 12:16:07 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <cmath>

class ScavTrap : public ClapTrap {
    public:
        ScavTrap ();
        ScavTrap (const std::string& name);
        ScavTrap (const ScavTrap &a);
        ScavTrap& operator = (const ScavTrap &a);
        ~ScavTrap();
        void guardGate();
};

#endif
