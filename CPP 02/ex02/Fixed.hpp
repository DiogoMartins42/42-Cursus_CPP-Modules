/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:02:50 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/23 15:02:51 by dmanuel-         ###   ########.fr       */
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

        bool operator>(const Fixed& a) const;
        bool operator<(const Fixed& a) const;
        bool operator>=(const Fixed& a) const;
        bool operator<=(const Fixed& a) const;
        bool operator==(const Fixed& a) const;
        bool operator!=(const Fixed& a) const;

        Fixed operator+(const Fixed& a) const;
        Fixed operator-(const Fixed& a) const;
        Fixed operator*(const Fixed& a) const;
        Fixed operator/(const Fixed& a) const;

        Fixed operator++(void);
        Fixed operator++(int);
        Fixed operator--(void);
        Fixed operator--(int);

        static Fixed& min(Fixed& a1, Fixed& b1);
        static Fixed& min(const Fixed& a1, const Fixed& b1);
        static Fixed& max(Fixed& a1, Fixed& b1);
        static Fixed& max(const Fixed& a1, const Fixed& b1);


};

std::ostream& operator<<(std::ostream& out, Fixed const& value);

#endif
