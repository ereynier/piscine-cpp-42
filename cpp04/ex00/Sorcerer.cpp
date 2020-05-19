/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 15:23:57 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 15:59:42 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

/*CONSTRUCTOR-----------------------------------------------------*/

Sorcerer::Sorcerer()
{
    std::cout << name << ", " << title << " is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << name << ", " << title << " is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
    *this = src;
    std::cout << name << ", " << title << " is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string m_name, std::string m_title)
    : name(m_name), title(m_title)
{
    std::cout << name << ", " << title << " is born!" << std::endl;
}

/*OPERATOR-----------------------------------------------------*/

Sorcerer &Sorcerer::operator=(Sorcerer const &rhs)
{
    name = rhs.name;
    title = rhs.title;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Sorcerer &in)
{
    out << "I am " << in.getName() << ", " << in.getTitle() << ", and I like ponies!" << std::endl;
    return (out);
}

/*ACCESORS-----------------------------------------------------*/

std::string Sorcerer::getName() const
{
    return (name);
}

std::string Sorcerer::getTitle() const
{
    return (title);
}

/*FUNCTIONS-----------------------------------------------------*/

void Sorcerer::polymorph(Victim const &target) const
{
    target.getPolymorphed();
}