/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 17:12:08 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 19:02:08 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{

}

Enemy::Enemy(int m_hp, std::string const & m_type)
    : hp(m_hp), type(m_type)
{

}

Enemy::~Enemy()
{
    
}

Enemy::Enemy(Enemy const &src)
{
    *this = src;
}

Enemy &Enemy::operator=(Enemy const &rhs)
{
    if (this != &rhs)
    {
        type = rhs.type;
        hp = rhs.hp;
    }
    return (*this);
}

void Enemy::takeDamage(int damage)
{
    if (damage > 0)
    {
        hp -= damage;
        if (hp < 0)
            hp = 0;
    }
}

std::string Enemy::getType() const
{
    return (type);
}

int Enemy::getHP() const
{
    return (hp);
}