/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:09:45 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/29 14:09:46 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    std::string ideas[100];

    public:
        Brain();
        Brain(const Brain& val);
        Brain& operator=(const Brain& val);
        ~Brain();
};


#endif
