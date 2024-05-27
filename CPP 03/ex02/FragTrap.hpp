/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:31:24 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/27 14:31:25 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <cmath>

class FragTrap : public ClapTrap {
    public:
        FragTrap ();
        FragTrap (const std::string& name);
        FragTrap (const FragTrap &a);
        FragTrap& operator = (const FragTrap &a);
        ~FragTrap();
        void highFivesGuys();
};

#endif
