/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmanuel- <dmanuel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:14:39 by dmanuel-          #+#    #+#             */
/*   Updated: 2024/09/20 14:27:11 by dmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

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

static int maxnum(std::vector<int>& val)
{
    int result = 0;
    
    for (std::vector<int>::iterator it = val.begin(); it != val.end(); it++)
    {
        if (*it > result)
            result = *it;
    }
    return (result);
}

static int minnum(std::vector<int>& val)
{
    int result = maxnum(val);
    
    for (std::vector<int>::iterator it = val.begin(); it != val.end(); it++)
    {
        if (*it < result)
            result = *it;
    }
    return (result);
}

int Span::longestSpan(void)
{
    if(this->val.size() <= 1)
        throw (Span::TooFewException());
    return (maxnum(this->val) - minnum(this->val));
}

int Span::shortestSpan(void)
{
    if (this->val.size() <= 1)
        throw (Span::TooFewException());
    int difference = longestSpan();
    std::vector<int> temp(this->range);
    std::copy(this->val.begin(), this->val.end(), temp.begin());
    std::sort(temp.begin(), temp.end());
    for (std::vector<int>::iterator it = temp.begin(); it != temp.end(); ++it)
    {
        if ((it + 1) != temp.end() && (*(it +1) - *it) < difference)
            difference = *(it + 1) - *it; 
    }
    return (difference);
}

void Span::createNumbers(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
    for (std::vector<int>::iterator it = first; it != last; ++it)
        this->addNumber(*it);
}

const char* Span::TooFewException::what() const throw()
{
    return ("Not enought elements!");
}

const char* Span::TooManyException::what() const throw()
{
    return ("Reached max elements!");
}