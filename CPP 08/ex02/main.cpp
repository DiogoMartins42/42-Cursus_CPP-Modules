/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:35:04 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/23 11:02:10 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.tpp"
#include <iostream>


template<typename T>
static void printContainer(typename T::iterator begin, typename T::iterator end)
{
	for (typename T::iterator it = begin; it != end; ++it)
	{
		std::cout << " " << *it;
	}
	std::cout << std::endl;
}

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
//[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "More tests\n";

    MutantStack<int> mutantStack;

	mutantStack.push(4);
	mutantStack.push(3);
	mutantStack.push(2);
	mutantStack.push(1);
	mutantStack.push(0);

	std::cout << "mutantStack contains:";
	printContainer<MutantStack<int> >(mutantStack.begin(), mutantStack.end());
	return 0;
}