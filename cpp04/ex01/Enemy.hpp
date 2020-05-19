/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 17:08:15 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 21:07:16 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
class Enemy
{
    protected:
        std::string type;
        int         hp;
        Enemy();

    public:
        Enemy(int m_hp, std::string const &m_type);
        virtual ~Enemy();
        Enemy(Enemy const &src);

        Enemy &operator=(Enemy const &rhs);

        std::string virtual getType() const;
        int getHP() const;

        virtual void takeDamage(int damage);
};

#endif