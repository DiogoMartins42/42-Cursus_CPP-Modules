/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:55:48 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/04 10:31:35 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

    const std::string   name;
    const int reqGrade;
    const int execGrade;
    bool                isSigned;

    public:
        AForm();
        AForm(const std::string& name, int reqGrade, int execGrade);
        AForm(const AForm&);
        AForm& operator=(const AForm&);
        virtual ~AForm();


        std::string getName() const;
        bool    getSigned() const;
        int     GradeSign() const;
        int     GradeExec() const;

        void    beSigned(const Bureaucrat& bureaucrat);
        virtual void execute(Bureaucrat const& executor) const = 0;
       
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream& operator <<(std::ostream&, const AForm&);
