/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 17:24:33 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 19:03:36 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
    : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Break everything!" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &src)
{
    *this = src;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &rhs)
{
    if (this != &rhs)
    {
        type = rhs.type;
        hp = rhs.hp;
    }
    return (*this);
}

void SuperMutant::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 3);
}