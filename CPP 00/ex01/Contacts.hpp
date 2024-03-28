/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:58:49 by dmanuel-          #+#    #+#             */
/*   Updated: 2023/10/25 12:58:49 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by dmanuel- on 10/25/23.
//

#ifndef CONTACTS_H
#define CONTACTS_H

#include <iostream>
#include <iomanip>

class Contact
{
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _darkestSecret;
        std::string _phoneNumber;
        int         _index;

        std::string _printLen(std::string str) const;
        std::string _getInput(std::string str) const;

        public:
            Contact();
            ~Contact();
            void    init(void);
            void    view(int index) const;
            void    display(int index) const;
            void    setIndex(int i);
};

#endif //CPP_00_CONTACTS_H
