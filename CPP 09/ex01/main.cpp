/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:35:04 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/24 11:09:56 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

static int create(std::stack<int>& stack, std::string& method)
{
    int numbers = 0;
    int operators = 0;
    
    for (std::string::iterator it = method.end(); it >= method.begin(); --it)
    {
        if (*it && strchr("0123456789", *it))
        {
            stack.push(*it -'0');
            numbers++;
        }
        else if (*it && strchr("+-/*", *it))
        {
            stack.push(*it);
            operators++;
        }
        else if (*it && *it != ' ')
            throw(RPN::RPNException());
    }
    if (numbers < 2 || operators != (numbers - 1))
        throw(RPN::RPNException());
    return 0;
}

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout << "Use RPN method\n";
        return 1;
    }
    std::string method = argv[1];
    std::stack<int> stack;

    try
    {
        create(stack, method);
        std::cout << RPN::calculate(stack) <<std::endl; 
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
        return 1;
    }
    return 0;
}
