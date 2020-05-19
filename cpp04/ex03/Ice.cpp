/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 00:15:20 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 02:25:57 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
    : AMateria("ice", 0)
{

}

Ice::~Ice()
{
    
}

Ice &Ice::operator=(Ice const &rhs)
{
    if (this != &rhs)
    {
        AMateria::setXP(rhs.getXP());
    }
    return (*this);
}

AMateria *Ice::clone() const
{
    AMateria *out = new Ice;
    return (out); 
}

void Ice::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}