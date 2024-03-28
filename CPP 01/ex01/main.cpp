/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 19:03:19 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/03/28 19:03:20 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 4

int main(void) {
    Zombie *zombies = zombieHorde(N, "Zombie");

    for (size_t i = 0; i < N; i++) {
        zombies[i].announce();
    }

    delete [] zombies;
    return 0;
}