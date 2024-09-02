/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:09:41 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/29 14:09:42 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructed\n";
    for (int i = 0; i < 100; ++i){
        ideas[i] = "Default Idea";
    }
}

Brain::Brain(const Brain& val)
{
    std::cout << "Brain copy construtor\n";
    for (int i = 0; i < 100; ++i){
        ideas[i] = val.ideas[i];
    }
}

Brain& Brain::operator=(const Brain& val)
{
    if (this != &val)
    {
        for (int i = 0; i < 100; ++i)
        {
            ideas[i] = val.ideas[i];
        }
    }
    std::cout << "Brain Copy Operator\n";
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Destructor\n";
}
