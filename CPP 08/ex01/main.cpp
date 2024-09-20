/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:35:04 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/20 14:26:24 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"
#include <ctime>
#include <cstdlib>
#include <algorithm>

int main()
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    {
		try
		{
			Span sp = Span(2);

			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << "Caught exception: " << e.what();
		}
	}
	std::cout << std::endl;
	// Not enough values
	{
		try
		{
			Span sp = Span(2);

			sp.addNumber(6);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << "Caught exception: " << e.what();
		}
	}
	std::cout << std::endl;
	// Add random numbers using range of iterators
	{
		try
		{
			Span sp = Span(10000);
			std::vector<int> v(10000);

			std::srand(std::time(0));
			std::generate(v.begin(), v.end(), std::rand);
			sp.createNumbers(v.begin(), v.end());

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << "Caught exception: " << e.what();
		}
	}
	return 0;
}