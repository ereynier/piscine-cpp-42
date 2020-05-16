/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 21:06:32 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/16 22:01:20 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType()
{
    const std::string &ref = type;
    return (ref);
}

void Weapon::setType(std::string m_type)
{
    type = m_type;
}

Weapon::Weapon(std::string m_type)
{
    type = m_type;
}

Weapon::Weapon()
{
    type = "hands";
}