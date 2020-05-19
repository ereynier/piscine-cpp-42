/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 17:33:50 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 18:49:10 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
    : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &src)
{
    *this = src;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &rhs)
{
    if (this != &rhs)
    {
        type = rhs.type;
        hp = rhs.hp;
    }
    return (*this);
}