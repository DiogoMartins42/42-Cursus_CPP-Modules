/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:35:04 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/24 14:44:37 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PmergeMe.hpp"
#include <ctime>
#include <cstdlib>
#include <algorithm>

template<typename T>
void printObjects(const T& container)
{
	for (typename T::const_iterator it = container.begin(); it != container.end(); ++it)
	{
		std::cout << " " << *it;
	}
    std::cout << std::endl;
}

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        std::cout << "/PmergMe <positive int sequence>\n";
        return 1; 
    }
    std::vector<int> vector;
    std::deque<int> deque;
    for (int i = 1; i < argc; ++i)
    {
        int num = std::atoi(argv[i]);
        vector.push_back(num);
    }
    deque = std::deque<int>(vector.begin(), vector.end());

    std::vector<int> printvector = vector;
    std::deque<int> printdeque = deque;

    std::clock_t startVector = std::clock();
    PmergeMe::sort(vector);
    std::clock_t endVector = std::clock();
    double timeVector = static_cast<double>(endVector - startVector);

    std::clock_t startDeque = std::clock();
    PmergeMe::sort(deque);
    std::clock_t endDeque = std::clock();
    double timeDeque = static_cast<double>(endDeque - startDeque);

    std::cout << "Vector Sort\n";
    printObjects(printvector);
    printObjects(vector);
    std::cout << "Time to process vector: " << timeVector << " us" << std::endl;

    std::cout << "Deque Sort\n";
    printObjects(printdeque);
    printObjects(deque);
    std::cout << "Time to process deque: " << timeDeque << " us"<< std::endl;

    return 0;
}
