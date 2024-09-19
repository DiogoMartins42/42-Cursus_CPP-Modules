/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:14:39 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/19 14:57:56 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : val(0), range(0)
{
    
}

Span::Span(unsigned int length) : val(0), range(length)
{
    
}

Span::Span(const Span& span) : range(span.range)
{
    std::copy(span.val.begin(), span.val.end(), this->val.begin());
}

Span& Span::operator=(const Span& span)
{
    std::copy(span.val.begin(), span.val.end(), this->val.begin());
    const_cast<unsigned int&>(this->range) = span.range;
    return (*this);
}

Span::~Span()
{
    
}
void Span::addNumber(int value)
{
    if (this->val.size() == range)
        throw(Span::TooManyException());
    this->val.push_back(value);
}