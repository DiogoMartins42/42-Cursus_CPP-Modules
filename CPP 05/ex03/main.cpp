/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:55:50 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/09 13:38:31 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
    try
    {
        Intern intern;
        AForm* form;
        {
            std::cout << std::endl;
            form = intern.makeForm("Presidential", "John");
            if (form)
                std::cout << *form;
            delete form;
        }
        {
            std::cout << std::endl;
            form = intern.makeForm("Shrubbery", "John Bush");
            if (form)
                std::cout << *form;
            delete form;
        }
        {
            std::cout << std::endl;
            form = intern.makeForm("Robotomy", "John Robot");
            if (form)
                std::cout << *form;
            delete form;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return(0);
}