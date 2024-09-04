/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:55:50 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/04 10:39:48 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main(void)
{
	{
        std::cout << "Valid" << std::endl;
        try
        {
            Bureaucrat bureaucrat("John",1);
            std::cout << bureaucrat;
            Form form("Form", 1, 1);
            std::cout << form;
            std::cout << std::endl;
            bureaucrat.signForm(form);
            std::cout << form;
        }
        catch (std::exception& e)
        {
            std::cout << e.what();
        }
    }
    {
        std::cout << "Not Valid" << std::endl;
        try
        {
            std::cout << std::endl;
            Bureaucrat bureaucrat("Not John",1);
            std::cout << bureaucrat;
            Form form("Not Form", 0, 151);
            std::cout << form;
            std::cout << std::endl;
            bureaucrat.signForm(form);
            std::cout << form;
            
        }
        catch (std::exception& e)
        {
            std::cout << e.what();
        }
    }
    {
        std::cout << "Bad Valid" << std::endl;
        try
        {
            std::cout << std::endl;
            Bureaucrat bureaucrat("Bad John",10);
            std::cout << bureaucrat;
            Form form("Bad Form", 1, 1);
            std::cout << form;
            std::cout << std::endl;
            bureaucrat.signForm(form);
            std::cout << form;
            std::cout << std::endl;
        }
        catch (std::exception& e)
        {
            std::cout << e.what();
        }
    }
}