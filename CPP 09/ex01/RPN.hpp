/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:15:03 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/24 11:01:08 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <cstring>

class RPN
{
    public:
        RPN();
        RPN(const RPN&);
        RPN& operator=(const RPN&);
        ~RPN();
        
        static int calculate(std::stack<int>& stack);

        class RPNException : public std::exception
        {
            virtual const char * what() const throw();
        };
    
};