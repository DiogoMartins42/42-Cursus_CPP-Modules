/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:38:36 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/20 15:09:13 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(const MutantStack<T>&);
        MutantStack<T>& operator=(const MutantStack<T>&);
        ~MutantStack();


        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin() { return this->c.begin(); };
        iterator end() { return this->c.end(); };
};