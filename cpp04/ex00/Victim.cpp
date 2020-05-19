/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 15:51:35 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 15:56:51 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

/*CONSTRUCTOR-----------------------------------------------------*/

Victim::Victim()
{
    std::cout << "A random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "The victim " << name << " died for no apparent reasons!" << std::endl;
}

Victim::Victim(Victim const &src)
{
    *this = src;
    std::cout << "A random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(std::string m_name)
    : name(m_name)
{
    std::cout << "A random victim called " << name << " just appeared!" << std::endl;
}

/*OPERATOR-----------------------------------------------------*/

Victim &Victim::operator=(Victim const &rhs)
{
    name = rhs.name;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Victim &in)
{
    out << "I am " << in.getName() << ", and I like otters!" << std::endl;
    return (out);
}

/*ACCESORS-----------------------------------------------------*/

std::string Victim::getName() const
{
    return (name);
}

/*FUNCTIONS-----------------------------------------------------*/

void Victim::getPolymorphed() const
{
    std::cout << name << " was jsut polymorphed in a cute little sheep!" << std::endl;
}