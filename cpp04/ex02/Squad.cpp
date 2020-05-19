/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 19:42:38 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 21:44:51 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <iostream>

Squad::Squad()
    : squad(0), count(0)
{

}

Squad::~Squad()
{
    t_squad *tmp = squad;
    t_squad *next;
    
    while (tmp)
    {
        next = tmp->next;
        delete tmp->unit;
        delete tmp;
        tmp = next;
    }
    squad = 0;
}

Squad::Squad(const Squad &src)
{
    *this = src;
}

Squad &Squad::operator=(Squad const &rhs)
{
    if (this != &rhs)
    {
        t_squad *tmp = squad;
        t_squad *next;
        
        while (tmp)
        {
            next = tmp->next;
            delete tmp->unit;
            delete tmp;
            tmp = next;
        }
        squad = 0;
        if (rhs.squad)
        {
            tmp = rhs.squad;
            while (tmp)
            {
                this->push(tmp->unit->clone());
                tmp = tmp->next;
            }
        }
        count = rhs.count;
    }
    return (*this);
}

int Squad::getCount() const
{
    return (count);
}

ISpaceMarine *Squad::getUnit(int N) const
{
    int i = -1;
    ISpaceMarine *out;
    t_squad *next = squad;

    while (i < N && next)
    {
        out = next->unit;
        i++;
        next = next->next;
    }
    return (out);
}

int Squad::push(ISpaceMarine *unit)
{
    t_squad *next = squad;
    t_squad *append = new t_squad;
    append->unit = unit;
    append->next = 0;
    if (squad == 0)
    {
        squad = append;
        count += 1;
        return (count);
    }
    while (next->next)
        next = next->next;
    next->next = append;
    count += 1;
    return (count);
}