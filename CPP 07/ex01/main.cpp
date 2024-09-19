/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:35:04 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/19 14:11:21 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void add(int &num)
{
    std::cout << num <<std::endl;
    num = num + 3;
    std::cout << num <<std::endl;
    std::cout <<std::endl;
}

int main(void)
{
    int* array = new int[6];
    for (int i = 0; i <= 5; i++)
        array[i] = i;

    ::iter(array, 6, add);
    delete[] array;
    return (0);
}