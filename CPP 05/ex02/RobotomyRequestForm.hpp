/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:32:17 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/04 15:10:03 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{

        const std::string formtarget;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string formtarget);
        RobotomyRequestForm(const RobotomyRequestForm&);
        RobotomyRequestForm& operator=(const RobotomyRequestForm&);
        ~RobotomyRequestForm();
        
        void execute(const Bureaucrat& executor) const;
};