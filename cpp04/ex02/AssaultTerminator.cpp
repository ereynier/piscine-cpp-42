/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 20:38:02 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 20:45:35 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleport from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I'll come back" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src)
{
    *this = src;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &rhs)
{
    (void)rhs;
    return (*this);
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. Purify it!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}

ISpaceMarine *AssaultTerminator::clone() const
{
    ISpaceMarine *unit = new AssaultTerminator;
    return (unit);
}