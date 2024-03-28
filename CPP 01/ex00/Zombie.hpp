/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zomibie.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:35:41 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/03/28 16:35:44 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie(std::string name);
        ~Zombie();
        void    announce(void);
        Zombie* newZombie(std::string name);
        void    randomChump(std::string name);
};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);

#endif