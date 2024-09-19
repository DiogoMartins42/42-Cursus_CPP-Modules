/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:17:54 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/19 14:01:13 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.hpp"

template<typename T>
Array<T>::Array() : arr(new T[0]), arrSize(0)
{
    
}

template<typename T>
Array<T>::Array(unsigned int n) : arr(new T[n]), arrSize(n)
{
    for (unsigned int i = 0; i < n; i++)
        this->arr[i] = 0;
}

template<typename T>
Array<T>::Array(const Array<T>& val) : arr(new T[val.size()]), arrSize(val.size())
{
    for (unsigned int i = 0; i < val.size(); i++)
        this->arr[i] = val.arr[i];
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& val)
{
    if (this == &val)
        return (*this);
     delete[] this->arr;
    this->arr = new T[val.size()];
    for (unsigned int i = 0; i < val.size(); i++)
        this->arr[i] = val.arr[i];
    this->arrSize = val.size();
    return (*this);
}

template<typename T>
Array<T>::~Array()
{
    delete[] this->arr;
}

template<typename T>
unsigned int Array<T>::size() const
{
    return (this->arrSize);
}

template<typename T>
T& Array<T>::operator[](unsigned int n)
{
    if (n >= this->size())
        throw(Array<T>::OutOfBoundsException());
    return (this->arr[n]);
}

template<typename T>
const char* Array<T>::OutOfBoundsException::what() const throw()
{
    return("Out of bounds!\n");
}