/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 16:29:57 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 17:06:18 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

/*CONSTRUCTOR-----------------------------------------------------*/

AWeapon::AWeapon()
{
    
}

AWeapon::AWeapon(std::string const &m_name, int m_apcost, int m_damage)
    : name(m_name), apcost(m_apcost), damage(m_damage)
{
    
}

AWeapon::~AWeapon()
{
    
}

AWeapon::AWeapon(AWeapon const &src)
{
    *this = src;
}

/*OPERATOR-----------------------------------------------------*/

AWeapon &AWeapon::operator=(AWeapon const &rhs)
{
    if (this != &rhs)
    {
        name = rhs.name;
        apcost = rhs.apcost;
        damage = rhs.damage;
    }
    return (*this);
}

/*ACCESORS-----------------------------------------------------*/

int AWeapon::getAPCost() const
{
    return (apcost);
}

int AWeapon::getDamage() const
{
    return (damage);
}

std::string AWeapon::getName() const
{
    return (name);
}