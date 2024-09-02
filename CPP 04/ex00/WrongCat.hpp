/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:28:28 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/29 10:28:30 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat  : public WrongAnimal {
    protected:
        std::string type;
    public:
        WrongCat();
        WrongCat(const WrongCat& val);
        WrongCat& operator=(const WrongCat& val);
        ~WrongCat();

        void makeSound() const;
};

#endif
