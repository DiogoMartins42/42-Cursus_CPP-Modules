/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:15:32 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/24 14:42:44 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
#include <deque>
#include <iostream>
#include <string>
#include <algorithm>


template <typename T>
void insertContainer(T& container, int val)
{
    typename T::iterator it = container.begin();
    while ( it != container.end() && val > *it)
        ++it;
    container.insert(it, val);
}

template <typename T>
void sortContainer(T& container)
{
    int n = container.size();
    if (n == 0)
    {
        std::cerr << "Error empty!\n";
        return ;
    }

    T small;
    T large;
    
    for (int i = 0; i < n - 1; i +=2)
    {
        if (container[i] < container[i + 1])
        {
            small.push_back(container[i]);
            large.push_back(container[i + 1]);
        }
        else
        {
            small.push_back(container[i + 1]);
            large.push_back(container[i]);
        }
    }
    if ((n % 2) != 0)
        small.push_back(container[n - 1]);
    
    T sortedContainer;
    int smallSize= small.size();

    if (smallSize >= 3)
    {
        sortedContainer.push_back(small[0]);
        sortedContainer.push_back(small[1]);
        sortedContainer.push_back(small[2]);
        std::sort(sortedContainer.begin(),sortedContainer.end());
    }
    else
    {
        sortedContainer = small;
        std::sort(sortedContainer.begin(), sortedContainer.end());
    }
    
    for (int i = 3; i < smallSize; i++)
    {
        insertContainer(sortedContainer, small[i]);
    }

    for (typename T::iterator it = large.begin(); it != large.end(); ++it)
    {
        insertContainer(sortedContainer, *it);
    }
    container = sortedContainer;
}

class PmergeMe
{
    public:

        PmergeMe();
        PmergeMe(const PmergeMe&);
        PmergeMe& operator=(const PmergeMe&);
        ~PmergeMe();

        template <typename T>
        static void sort(T& container)
        {
            (void)sortContainer(container);
        }
};
