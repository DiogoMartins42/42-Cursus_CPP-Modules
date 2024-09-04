/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:55:50 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/04 15:20:32 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

void form_shrubbery()
{
    std::cout << "\nShrubbery\n" << std::endl;
	{
        std::cout << "Valid" << std::endl;
        try
        {
           Bureaucrat bureaucrat("John", 1);
           std::cout << bureaucrat;
           ShrubberyCreationForm form("garden");
           std::cout << form << std::endl;
           bureaucrat.signForm(form);
           bureaucrat.executeForm(form);
        }
        catch (std::exception& e)
        {
            
        }
    }
    {
        std::cout << "\nNot Valid" << std::endl;
        try
        {
            
            
        }
        catch (std::exception& e)
        {
        
        }
    }
}

void form_president()
{
	{
        std::cout << "\nPresident" << std::endl;
        std::cout << "Valid" << std::endl;
        try
        {
           
        }
        catch (std::exception& e)
        {
            
        }
    }
    {
        std::cout << "\nNot Valid" << std::endl;
        try
        {
            
            
        }
        catch (std::exception& e)
        {
        
        }
    }
}

void form_robotomy()
{
	{
        std::cout << "\nRobotomy\n" << std::endl;
        std::cout << "Valid" << std::endl;
        try
        {
           
        }
        catch (std::exception& e)
        {
            
        }
    }
    {
        std::cout << "\nNot Valid" << std::endl;
        try
        {
            
            
        }
        catch (std::exception& e)
        {
        
        }
    }
}

int main(void)
{
    form_shrubbery();
    form_president();
    form_robotomy();
    return(0);
}