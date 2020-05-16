/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 17:09:13 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/16 18:18:39 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string m_type)
{
    type = m_type;
}

Zombie *ZombieEvent::newZombie(std::string m_name)
{
    Zombie *newZombie = new Zombie(m_name, type);
    return (newZombie);
}

Zombie *ZombieEvent::randomChump(void)
{
    int i = rand() % 5;
    const std::string m_name[5] = {"Joris", "Jean-Phillipe","Camille","Amelie","Gerard"};
    Zombie *newZombie = new Zombie(m_name[i], type);
    (*newZombie).advert();
    return (newZombie);
}