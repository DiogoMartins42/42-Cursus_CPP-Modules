/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:55:48 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/02 12:55:49 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include <Bureaucrat.hpp>

class Bureaucrat;

class Form
{
    private:
        const std::string   name;
        bool                isSigned;
        const int reqGrade;
        const int execGrade;

    public:
        Form();
        Form(const std::string& name, int reqGrade, int execGrade);
        Form(const Form&);
        Form& operator=(const Form&);
        ~Form();


        std::string getName() const;
        bool    getSigned() const;
        int     GradeSign() const;
        int     GradeExec() const;

        void    beSigned(const Bureaucrat& bureaucrat);
       
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

std::ostream& operator <<(std::ostream&, const Form&);
