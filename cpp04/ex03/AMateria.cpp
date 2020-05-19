/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 00:24:12 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 02:38:06 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    
}

AMateria::AMateria(std::string type, unsigned int xp)
    : _xp(xp), _type(type)
{
    
}

AMateria::~AMateria()
{
    
}

AMateria::AMateria(AMateria const &src)
{
    *this = src;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
    if (this != &rhs)
    {
        _xp = rhs._xp;
    }
    return (*this);
}

void AMateria::setXP(unsigned int xp)
{
    _xp = xp;
}

unsigned int AMateria::getXP() const
{
    return (_xp);
}

std::string const &AMateria::getType() const
{
    return (_type);
}

void AMateria::use(ICharacter &target)
{
    (void)target;
    _xp += 10;
}