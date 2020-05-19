/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 17:36:57 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 19:08:12 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*CONSTRUCTOR-----------------------------------------------------*/

Character::Character()
{
    
}

Character::Character(std::string const &m_name)
    : name(m_name), ap(40)
{
    
}

Character::Character(Character const &src)
{
    *this = src;
}

Character::~Character()
{
    
}

/*OPERATOR-----------------------------------------------------*/

Character &Character::operator=(Character const &rhs)
{
    if (this != &rhs)
    {
        name = rhs.name;
        ap = rhs.ap;
        weapon = rhs.weapon;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Character &in)
{
    if (in.getWeaponName() != "")
        out << in.getName() << " has " << in.getAP() << " and carries a " << in.getWeaponName() << std::endl;
    else
        out << in.getName() << " has " << in.getAP() << " and is unarmed" << std::endl;
    return (out);
}

/*UTILITIES-----------------------------------------------------*/

std::string Character::getName() const
{
    return (name);
}

std::string Character::getWeaponName() const
{
    if (weapon)
        return (weapon->getName());
    else
        return ("");
}

int Character::getAP() const
{
    return (ap);
}

/*FUNCTIONS-----------------------------------------------------*/

void Character::recoverAP()
{
    if (ap + 10 >=40)
        ap = 40;
    else
        ap += 10;
}

void Character::attack(Enemy *target)
{
    if (target && weapon && ap - weapon->getAPCost() >= 0)
    {
        std::cout << name << " attack " << target->getType() << " with a " << weapon->getName() << std::endl;
        weapon->attack();
        ap -= weapon->getAPCost();
        target->takeDamage(weapon->getDamage());
        if (target->getHP() <= 0)
            delete target;
    }
}

void Character::equip(AWeapon *m_weapon)
{
    weapon = m_weapon;
}
