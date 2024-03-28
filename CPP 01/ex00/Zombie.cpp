/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zomibie.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:35:48 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/03/28 16:35:51 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->_name = name;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << this->_name << " has been deleted! puff!!!" << std::endl;
}

void    Zombie::announce(void) {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}