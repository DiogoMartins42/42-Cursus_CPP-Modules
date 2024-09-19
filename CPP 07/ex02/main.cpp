/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:35:04 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/19 14:01:27 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Array.tpp"
#include <iostream>
#include <stdlib.h>

template<typename T>
void printObjects(Array<T>& arr, const std::string& name)
{
	for (unsigned int i = 0; i < arr.size(); i += 1)
	{
		std::cout << name << "[" << i << "] = " << arr[i] << "\n";
	}
}
/*
int main(void)
{
	Array<int> a(3);
	Array<int> b(3);

	// Print a
	printObjects(a, "a");
	std::cout << std::endl;
	// Print b
	printObjects(b, "b");
	std::cout << std::endl;

	// Set elements from a to 1
	std::cout << "*** a[n] = 1 ***" << std::endl;
	std::cout << std::endl;
	a[0] = 1;
	a[1] = 1;
	a[2] = 1;
	std::cout << std::endl;
	// Print a
	printObjects(a, "a");
	std::cout << std::endl;
	// Print b
	printObjects(b, "b");
	std::cout << std::endl;

	std::cout << "*** b = a ***" << std::endl;
	b = a;
	std::cout << std::endl;
	// Print a
	printObjects(a, "a");
	std::cout << std::endl;
	// Print b
	printObjects(b, "b");
	std::cout << std::endl;

	// Empty array
	std::cout << "*** Initializing empty array ***" << std::endl;
	std::cout << std::endl;
	Array<int> empty;
	printObjects(empty, "empty");
	std::cout << std::endl;

	// Out of bounds exception
	std::cout << "*** std::cout << a[n + 1] << std::endl ***" << std::endl;
	std::cout << std::endl;
	try
	{
		std::cout << a[a.size() + 1] << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
*/

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}
