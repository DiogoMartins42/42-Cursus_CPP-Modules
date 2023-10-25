/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42porto.pt>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:58:59 by dmanuel-          #+#    #+#             */
/*   Updated: 2023/10/25 12:58:59 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <limits>
#include <iostream>

int main(void){
    PhoneBook book;
    std::string input = "";
    book.intro();
    while (input.compare("EXIT")){
        if (input.compare("ADD") == 0)
            book.addContact();
        else if (input.compare("SEARCH") == 0){
            book.printContact();
            book.search();
        }
        std::cout << "> " << std::flush;
        std::cin >> input;
    }
    return 0;
}
