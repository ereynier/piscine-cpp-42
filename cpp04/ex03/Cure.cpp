/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 00:15:22 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 02:46:29 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
    : AMateria("cure", 0)
{

}

Cure::~Cure()
{
    
}

Cure &Cure::operator=(Cure const &rhs)
{
    if (this != &rhs)
    {
        AMateria::setXP(rhs.getXP());
    }
    return (*this);
}

AMateria *Cure::clone() const
{
    AMateria *out = new Cure;
    return (out);
}

void Cure::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}