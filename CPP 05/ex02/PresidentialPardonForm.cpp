/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:32:20 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/06 10:30:19 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() 
    : AForm("PresidentialPardonForm", 25, 5)
{  
}

PresidentialPardonForm::PresidentialPardonForm(const std::string formtarget)
	: AForm("PresidentialPardonForm", 25, 5), formtarget(formtarget)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& value)
    : AForm(value.getName(), value.GradeSign(), value.GradeExec()), formtarget(value.formtarget)
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& value)
{
    const_cast<std::string&>(this->formtarget) = value.formtarget;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    if (executor.getGrade() > this->GradeExec())
        throw(AForm::GradeTooLowException());
    else if (this->getSigned())
        std::cout << this->formtarget << " has been pardoned by Zaphod Beeblebrox.\n";
}