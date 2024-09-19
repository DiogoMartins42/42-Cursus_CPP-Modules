/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:35:04 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/18 14:38:29 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main(void)
{
    std::vector<int> vect;
    int x = 2;
    
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);

    std::cout << "Looking for " << x <<std::endl;
    std::cout << easyfind(vect,x) << std::endl;
    
    return 0;
}