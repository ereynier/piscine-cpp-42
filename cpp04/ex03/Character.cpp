/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 00:15:25 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 02:52:05 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    
}

Character::~Character()
{
    if (_inventory[0])
        delete _inventory[0];
    if (_inventory[1])
        delete _inventory[1];
    if (_inventory[2])
        delete _inventory[2];
    if (_inventory[3])
        delete _inventory[3];
}

Character::Character(std::string name)
    : _name(name)
{
    _inventory[0] = 0;
    _inventory[1] = 0;
    _inventory[2] = 0;
    _inventory[3] = 0;
}

Character::Character(Character const &src)
{
    *this = src;
}

Character &Character::operator=(Character const &rhs)
{
    if (this != &rhs)
    {
        if (_inventory[0])
        {
            delete _inventory[0];
            _inventory[0] = 0;
        }
        if (_inventory[1])
        {
            delete _inventory[1];
            _inventory[1] = 0;
        }
        if (_inventory[2])
        {
            delete _inventory[2];
            _inventory[2] = 0;
        }
        if (_inventory[3])
        {
            delete _inventory[3];
            _inventory[3] = 0;
        }
        _name = rhs._name;
        _inventory[0] = rhs._inventory[0];
        _inventory[1] = rhs._inventory[1];
        _inventory[2] = rhs._inventory[2];
        _inventory[3] = rhs._inventory[3];
    }
    return (*this);
}

std::string const &Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria *m)
{
    int i = 0;
    while (i < 4)
    {
        if (_inventory[i] == 0)
        {
            _inventory[i] = m;
            return ;
        }
        i++;
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
        _inventory[idx] = 0;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx <= 3 && _inventory[idx] != 0)
    {
        _inventory[idx]->use(target);
    }
}