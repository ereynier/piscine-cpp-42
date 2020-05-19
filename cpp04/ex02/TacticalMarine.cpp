/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 20:15:32 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 20:45:21 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for action!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src)
{
    *this = src;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &rhs)
{
    (void)rhs;
    return (*this);
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the Holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with chainsword *" << std::endl;
}

ISpaceMarine *TacticalMarine::clone() const
{
    ISpaceMarine *unit = new TacticalMarine;
    return (unit);
}