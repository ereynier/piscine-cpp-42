/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 21:10:43 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/16 22:26:51 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << name << " attacks with this " << wp.getType() << std::endl;
}

HumanA::HumanA(std::string m_name, Weapon &m_wp) : wp(m_wp), name(m_name)
{

}
