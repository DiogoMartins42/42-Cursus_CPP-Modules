/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:58:43 by dmanuel-          #+#    #+#             */
/*   Updated: 2023/10/25 12:58:43 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by dmanuel- on 10/25/23.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contacts.hpp"
#include <iostream>
#include <limits>

class PhoneBook
{
    private:
        Contact     _contacts[8];
        int         _readInput(void) const;
    public:
    PhoneBook();
    ~PhoneBook();
    void    addContact(void);
    void	printContacts(void) const;
	void	search(void) const;
	void	intro(void) const;
};

#endif //PHONEBOOK_HPP
