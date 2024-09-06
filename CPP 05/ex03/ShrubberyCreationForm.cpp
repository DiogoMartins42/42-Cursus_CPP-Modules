/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:32:05 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/04 15:17:39 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm() 
    : AForm("ShrubberyCreationForm", 145, 137)
{  
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string formtarget)
	: AForm("ShrubberyCreationForm", 145, 137), formtarget(formtarget)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& value)
    : AForm(value.getName(), value.GradeSign(), value.GradeExec()), formtarget(value.formtarget)
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& value)
{
    const_cast<std::string&>(this->formtarget) = value.formtarget;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
    if (executor.getGrade() > this->GradeExec())
        throw(AForm::GradeTooLowException());
    else if (this->getSigned())
    {
        std::string file = this->formtarget + "_shrubbery";
        std::ofstream outfile(file.c_str());

        if(outfile.is_open())
        {
            outfile << "   ccee888888888oo\n";
            outfile << " C8O8O8Q8PoOb o8oo\n";
            outfile << "  dOB69QO8PdUOpugoO9bD\n";
            outfile << "CgggbU8OU qOp qOdoUOdcb\n";
            outfile << "    6OuU  /p u gcoUodpP\n";
            outfile << "      \\//  /douUP\n";
            outfile << "        \\\\////\n";
            outfile << "         |||/\\\n";
            outfile << "         |||\\/\n";
            outfile << "         |||||\n";
            outfile << "   .....//||||\\....\n";

            outfile.close();
            
            std::cout << "File " << file << " created!" << std::endl;
        }
        else
            std::cerr << "Failed to create file!" << std::endl;
    }
}