/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 21:10:47 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/16 22:29:22 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << name << " attacks with this " << wp->getType() << std::endl;
}

HumanB::HumanB(std::string m_name) : name(m_name)
{

}

void HumanB::setWeapon(Weapon &m_wp)
{
    wp = &m_wp;
}