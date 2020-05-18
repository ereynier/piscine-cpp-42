/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 17:10:30 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/17 19:22:47 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* CONSTRUCTOR / DESTRUCTOR -------------------------------------------------*/

Fixed::Fixed() : fixed_pt_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(const int i) : fixed_pt_value(i << fractional_bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : fixed_pt_value((int) roundf(f * (1 << fractional_bits)))
{
    std::cout << "Float constructor called" << std::endl;
}

/* OPERATOR OVERLOAD --------------------------------------------------------*/

Fixed &Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        fixed_pt_value = rhs.getRawBits();
    return (*this);
}

std::ostream & operator<<(std::ostream & out, const Fixed & in)
{
    if (in.getRawBits() & 0b11111111)
    {
        out << in.toFloat();
    }
    else
    {
        out << in.toInt();
    }
    return (out);
}


/* MEMBER FUNCTIONS ---------------------------------------------------------*/

int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return (fixed_pt_value);
}

void Fixed::setRawBits(int const raw)
{
   // std::cout << "setRawBits member function called" << std::endl;
    fixed_pt_value = raw;
}

float Fixed::toFloat(void) const
{
   // std::cout << "toFloat member function called" << std::endl;
    return ((float) fixed_pt_value / (double) (1 << fractional_bits));
}

int Fixed::toInt(void) const
{
    //std::cout << "toInt member function called" << std::endl;
    return (fixed_pt_value >> fractional_bits);
}