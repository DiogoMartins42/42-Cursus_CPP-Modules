/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:38:51 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/06 14:26:21 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    
}

Intern::Intern(const Intern&)
{
    
}

Intern& Intern::operator=(const Intern&)
{
    return (*this);   
}

Intern::~Intern()
{
    
}

static AForm* newPresidentialPardonForm(const std::string& target)
{
    return (new PresidentialPardonForm(target));
}

static AForm* newRobotomyRequestForm(const std::string& target)
{
    return (new RobotomyRequestForm(target));
}

static AForm* newShrubberyCreationForm(const std::string& target)
{
    return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeForm(const std::string& type, const std::string& target)
{
    AForm* out;
    std::string forms[3]={"Presidential", "Robotomy", "Shrubbery"};
    fnProtoype function[3] = {&newPresidentialPardonForm, &newRobotomyRequestForm, &newShrubberyCreationForm};
    
    for (int i =2; i >= 0; i--)
    {
        if (forms[i] == type)
        {
            out = (function[i])(target);
            std::cout << "Intern created " << out->getName() << std::endl;
            return (out);
        }
    }
    std::cout << " Intern couldn`t find " << type << " form!\n";
    return (0);
}