/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:38:48 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/20 15:05:46 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack()
{
    
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T>&)
{
    
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& val)
{
    std::stack<T>::operator = (val);
    return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack()
{
    
}


