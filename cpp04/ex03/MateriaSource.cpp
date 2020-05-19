/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 00:15:26 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 02:51:16 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    _inventory[0] = 0;
    _inventory[1] = 0;
    _inventory[2] = 0;
    _inventory[3] = 0;
}

MateriaSource::~MateriaSource()
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

MateriaSource::MateriaSource(MateriaSource const &src)
{
    *this = src;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
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
        _inventory[0] = (rhs._inventory[0])->clone();
        _inventory[1] = (rhs._inventory[1])->clone();
        _inventory[2] = (rhs._inventory[2])->clone();
        _inventory[3] = (rhs._inventory[3])->clone();
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
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

AMateria *MateriaSource::createMateria(std::string const &type)
{
    int i = 0;
    while (i < 4)
    {
        if (_inventory[i] && _inventory[i]->getType() == type)
            return (_inventory[i]->clone());
        i++;
    }
    return (0);
}