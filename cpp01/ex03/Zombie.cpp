/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 17:03:27 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/16 19:13:35 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::advert(void)
{
    std::cout << "<" << name << " (" << type << ")> Braiiiiiinnnsssss ..." << std::endl;
}

Zombie::Zombie(std::string m_name, std::string m_type)
{
    name = m_name;
    type = m_type;
}

void Zombie::setName(std::string m_name)
{
    name = m_name;
}

Zombie::Zombie()
{
    type = "Basic";
}

Zombie::~Zombie()
{
    std::cout << name << " (" << type << ") est mort" << std::endl;
}