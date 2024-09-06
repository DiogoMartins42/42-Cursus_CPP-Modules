/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:55:43 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/02 13:32:05 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : reqGrade(1), execGrade(1), isSigned(false)
{
    
}

AForm::AForm(const std::string& name, int reqGrade, int execGrade)
    : reqGrade(reqGrade), execGrade(execGrade)
{
    if (this->execGrade < 1 || this->reqGrade < 1)
        throw(AForm::GradeTooHighException());
    else if (this->execGrade > 150 || this->reqGrade > 150)
        throw(AForm::GradeTooLowException());
    
    const_cast<std::string&>(this->name) = name;
    const_cast<int&>(this->reqGrade) = reqGrade;
    const_cast<int&>(this->execGrade) = execGrade;
    this->isSigned = false;
}

AForm& AForm::operator=(const AForm& value)
{
    const_cast<std::string&>(this->name) = value.name;
    const_cast<int&>(this->reqGrade) = value.reqGrade;
    const_cast<int&>(this->execGrade) = value.execGrade;
    this->isSigned = value.isSigned;
    return(*this);
}

AForm::AForm(const AForm& value)
    :name(value.name),reqGrade(value.reqGrade), 
     execGrade(value.execGrade), isSigned(value.isSigned)
{
    
}

AForm::~AForm()
{
    
}

std::string AForm::getName() const
{
    return(this->name);
}

int AForm::GradeSign() const
{
    return(this->reqGrade);
}

int AForm::GradeExec() const 
{
    return(this->execGrade);
}

bool AForm::getSigned() const
{
    return(this->isSigned);
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > this->reqGrade)
        throw(AForm::GradeTooLowException());
    this->isSigned= true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade too High!\n");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Grade too Low!\n");
}

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
    const std::string name = form.getName();

    os << name << std::endl;
    //os << std::string(name.length)
    os << "Grade to sign: " << form.GradeSign() << std::endl;
    os << "Grade to execute: " << form.GradeExec() << std::endl;
    if (form.getSigned())
        os << "Signed: True" << std::endl;
    else
        os << "Signed: False" << std::endl;
    return(os);
}