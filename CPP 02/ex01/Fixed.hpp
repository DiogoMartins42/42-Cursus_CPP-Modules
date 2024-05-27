/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:03:36 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/23 15:03:37 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    private:
        int Fixpoint;
        static const int fractionalbit = 8;

    public:
        Fixed();
        Fixed (const int a);
        Fixed (const float a);
        Fixed (const Fixed &a);
        Fixed& operator = (const Fixed &a);
        ~Fixed ();

        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, Fixed const& value);

#endif
