/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:28:28 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/29 10:28:30 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat  : public Animal {
    private:
        Brain* brain;
    public:
        Cat();
        Cat(const Cat& val);
        Cat& operator=(const Cat& val);
        ~Cat();

        void makeSound() const;
};

#endif
