/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:08:18 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/18 10:40:38 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<class T>
class Array{
    T* arr;
    unsigned int arrSize;

public:
    Array();
    Array(unsigned int n);
    Array(const Array&);
    Array& operator=(const Array&);
    ~Array();
    
    unsigned int size() const;
    T& operator[](unsigned int n);

    class OutOfBoundsException : public std::exception
    {
        public: 
            virtual const char* what() const throw();
    };
};