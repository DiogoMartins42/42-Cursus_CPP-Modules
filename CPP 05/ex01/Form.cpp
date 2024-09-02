/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:55:43 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/02 13:32:05 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : reqGrade(1), execGrade(1), isSigned(false)
{
    
}

Form::Form(const std::string& name, int reqGrade, int execGrade)
    : reqGrade(reqGrade), execGrade(execGrade)
{
    if (this->execGrade < 1 || this->reqGrade < 1)
        throw(Form::GradeTooHighException());
    else if (this->execGrade > 150 || this->reqGrade > 150)
        throw(Form::GradeTooLowException());
    
    const_cast<std::string&>(this->name) = name;
    const_cast<int&>(this->reqGrade) = reqGrade;
    const_cast<int&>(this->execGrade) = execGrade;
    this->isSigned = false;
}

Form& Form::operator=(const Form& value)
{
    const_cast<std::string&>(this->name) = value.name;
    const_cast<int&>(this->reqGrade) = value.reqGrade;
    const_cast<int&>(this->execGrade) = value.execGrade;
    this->isSigned = value.isSigned;
    return(*this);
}

Form::Form(const Form& value)
    :name(value.name),reqGrade(value.reqGrade), 
     execGrade(value.execGrade), isSigned(value.isSigned)
{
    
}

Form::~Form()
{
    
}

std::string Form::getName() const
{
    return(this->name);
}

int Form::GradeSign() const
{
    return(this->reqGrade);
}

int Form::GradeExec() const 
{
    return(this->execGrade);
}

bool Form::getSigned() const
{
    return(this->isSigned);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > this->reqGrade)
        throw(Form::GradeTooLowException());
    this->isSigned= true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade too High!\n");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade too Low!\n");
}

std::ostream& operator<<(std::ostream& os, const Form& form)
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