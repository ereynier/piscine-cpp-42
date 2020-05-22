/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 16:35:56 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/22 17:53:15 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span()
    : _n(0)
{
    
}

Span::~Span()
{
    
}

Span::Span(unsigned int n)
    : _n(n)
{
    
}

Span::Span(const Span &src)
{
    *this = src;
}

Span &Span::operator=(const Span &rhs)
{
    if (this != &rhs)
    {
        _n = rhs._n;
        _tab = rhs._tab;
    }
    return (*this);
}

void Span::addNumber(int i)
{
    if (_tab.size() < _n)
        _tab.push_back(i);
    else
        throw tooMuchNumber();
}

unsigned int Span::longestSpan()
{
    if (_tab.size() <= 1)
        throw notEnoughNumber();
    else
    {
        const auto result = std::minmax_element(_tab.begin(), _tab.end());
        return ((unsigned int)(*result.second - *result.first));
    }
    return (0);
}

unsigned int Span::shortestSpan()
{
    unsigned int s = 4294967295;
    int i = 1;
    int size = _tab.size();

    if (size <= 1)
        throw notEnoughNumber();
    else
    {
        std::sort (_tab.begin(), _tab.end());
        while (i < size)
        {
            if (s > (_tab[i] - _tab[i - 1]))
                s = _tab[i] - _tab[i - 1];
            i++;
        }
    }
    return (s);
}

/*EXCEPTION-----------------------------------------------------------*/

const char *Span::notEnoughNumber::what() const throw()
{
    return ("notEnoughNumber");
}

const char *Span::tooMuchNumber::what() const throw()
{
    return ("tooMuchNumber");
}
