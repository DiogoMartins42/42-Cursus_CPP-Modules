/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:14:55 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/24 11:28:51 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{

}

RPN::RPN(const RPN&)
{
    
}

RPN& RPN::operator=(const RPN&)
{
    return(*this);
}

RPN::~RPN()
{
    
}

void error()
{
    std::cout << "Error\n";
}

int mathing(std::stack<int>& op, int a, int b)
{
switch(op.top())
{
    case '+': return (a + b);
    case '-': return (a - b);
    case '*': return (a * b);
    case '/': 
        if (b == 0) error();
        return (a / b);
    default: error();
}
return 0;
    
}

int RPN::calculate(std::stack<int>& stack)
{
    int a;
    int b;

    a = stack.top();
    stack.pop();
    while (!stack.empty() && stack.top() < 10)
    {
        b = stack.top();
        stack.pop();
        if (!stack.empty() && stack.top() < 10)
        {
            stack.push(b);
            b = calculate(stack);
        }
        if (!stack.empty() && strchr("+-/*", stack.top()))
        {
            a = mathing(stack, a, b);
            stack.pop();
        }
        else
            throw(RPN::RPNException());
    }
    return (a);
}

const char* RPN::RPNException::what()const throw()
{
    return ("Error: Bad Expression! Not RPN!");
}