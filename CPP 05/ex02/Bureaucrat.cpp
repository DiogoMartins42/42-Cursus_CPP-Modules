/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:55:33 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/09 11:01:09 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name)
{
        if (grade < maxGrade)
            throw(Bureaucrat::GradeTooHighException());
        else if (grade > minGrade)
            throw(Bureaucrat::GradeTooLowException());
        else
            this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& value) 
    :name(value.name), grade(value.grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& value)
{
    const_cast<std::string&>(this->name) = value.name;
    this->grade = value.grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::incrementGrade()
{
    if (this->grade - 1 < maxGrade)
        throw(Bureaucrat::GradeTooHighException());
    else if (this->grade - 1 > minGrade)
        throw(Bureaucrat::GradeTooLowException());
    else
        this->grade--;
}

void Bureaucrat::decrementGrade()
{
    if (this->grade + 1 < maxGrade)
        throw(Bureaucrat::GradeTooHighException());
    else if (this->grade + 1 > minGrade)
        throw(Bureaucrat::GradeTooLowException());
    else
        this->grade++;
}

std::ostream& operator<<(std::ostream& op, const Bureaucrat& Bureaucrat)
{
    op << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << std::endl;
    return (op);
}

void Bureaucrat::executeForm(AForm const & form)
{
     try
    {
        form.execute(*this);
        if (!form.getSigned())
        {
            std::cout << form.getName() << " is not signed, can`t be executed." << std::endl;
        }
        std::cout << this->name << " executed the " << form.getName()
            << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << this->name << " couldn`t execute " << 
        form.getName() << " because " << e.what();
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too High!\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too Low!\n");
}

void    Bureaucrat::signForm(AForm& form) const
{
    try
    {
        form.beSigned(*this);
        std::cout <<this->name << " signed " << form.getName() << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << this->name << " couldn`t sign " << 
        form.getName() << " because " << e.what();
    }
}
