/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:02:46 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/05/23 15:02:47 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed (){
    //std::cout << "Default Cons" << std::endl;
    this->Fixpoint = 0;
}

Fixed::Fixed (const int a){
    //std::cout << "Int Cons" << std::endl;
    this->Fixpoint = a * (1 << Fixed::fractionalbit);
}

Fixed::Fixed (const float a){
    //std::cout << "Float Cons" << std::endl;
    this->Fixpoint = roundf(a * (1 << Fixed::fractionalbit));
}

Fixed::Fixed (const Fixed &a){
    //std::cout << "Copy Cons" << std::endl;
    *this = a;
}

Fixed   &Fixed::operator = (const Fixed &a){
    //std::cout << "Copy Operator" << std::endl;
    if (this != &a)
        this->Fixpoint = a.getRawBits();
    return (*this);
}

Fixed::~Fixed (){
    //std::cout << "Destructor" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return (this->Fixpoint);
}

void    Fixed::setRawBits(const int raw)
{
    this->Fixpoint = raw;
}

std::ostream& operator<<(std::ostream& out, Fixed const& a){
    out << a.toFloat();
    return (out);
}

float Fixed::toFloat(void) const
{
    return ((float)this->Fixpoint /(float)(1 << Fixed::fractionalbit));
}

int Fixed::toInt(void) const
{
    return(this->Fixpoint >> Fixed::fractionalbit);
}

bool Fixed::operator>(const Fixed& a) const
{
    return((this->getRawBits() > a.getRawBits()));
}

bool Fixed::operator<(const Fixed& a) const
{
    return((this->getRawBits() < a.getRawBits()));
}

bool Fixed::operator>=(const Fixed& a) const
{
    return((this->getRawBits() >= a.getRawBits()));
}

bool Fixed::operator<=(const Fixed& a) const
{
    return((this->getRawBits() <= a.getRawBits()));
}

bool Fixed::operator==(const Fixed& a) const
{
    return((this->getRawBits() == a.getRawBits()));
}

bool Fixed::operator!=(const Fixed& a) const
{
    return((this->getRawBits() != a.getRawBits()));
}

Fixed Fixed::operator+(const Fixed& a) const
{
    Fixed total(this->toFloat() + a.toFloat());
    return (total);
}

Fixed Fixed::operator-(const Fixed& a) const
{
    Fixed total(this->toFloat() - a.toFloat());
    return (total);
}

Fixed Fixed::operator*(const Fixed& a) const
{
    Fixed total(this->toFloat() * a.toFloat());
    return (total);
}

Fixed Fixed::operator/(const Fixed& a) const
{
    Fixed total(this->toFloat() / a.toFloat());
    return (total);
}

Fixed Fixed::operator++(void)
{
    this->Fixpoint++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed change = *this;
    ++(*this);
    return (change);
}

Fixed Fixed::operator--(void)
{
    this->Fixpoint--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed change = *this;
    --(*this);
    return (*this);
}

Fixed& Fixed::min(Fixed& a1, Fixed& b1)
{
    return (((a1 < b1) ? a1 : b1));
}

Fixed& Fixed::min(const Fixed& a1, const Fixed& b1)
{
    return ((Fixed&)((a1 < b1) ? a1 : b1));
}

Fixed& Fixed::max(Fixed& a1, Fixed& b1)
{
    return (((a1 > b1) ? a1 : b1));
}

Fixed& Fixed::max(const Fixed& a1, const Fixed& b1)
{
    return ((Fixed&)((a1 > b1) ? a1 : b1));
}

