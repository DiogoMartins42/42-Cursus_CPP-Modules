/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:31:58 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/04 15:18:12 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() 
    : AForm("RobotomyRequestForm", 72, 45)
{  
}

RobotomyRequestForm::RobotomyRequestForm(const std::string formtarget)
	: AForm("RobotomyRequestForm", 72, 45), formtarget(formtarget)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& value)
    : AForm(value.getName(), value.GradeSign(), value.GradeExec()), formtarget(value.formtarget)
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& value)
{
    const_cast<std::string&>(this->formtarget) = value.formtarget;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    if (executor.getGrade() > this->GradeExec())
        throw(AForm::GradeTooLowException());
    else if (this->getSigned())
    {
        std::srand(std::time(0));
        int randomNumber = std::rand() % 2;

        if (randomNumber == 0)
            std::cout << this->formtarget << " has been robotomized." << std::endl;
        else 
            std::cout << this->formtarget << " robotomy failed!" << std::endl;
    }
}