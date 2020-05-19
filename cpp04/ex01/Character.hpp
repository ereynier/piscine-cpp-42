/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 17:36:44 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 18:14:34 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>

class Character
{
    private:
        std::string name;
        int         ap;
        AWeapon     *weapon;
        Character();

    public:
        Character(std::string const &name);
        ~Character();
        Character(Character const &src);
        
        Character &operator=(Character const &rhs);

        void recoverAP();
        void equip(AWeapon *m_weapon);
        void attack(Enemy *target);
        std::string virtual getName() const;
        std::string virtual getWeaponName() const;
        int virtual getAP() const;
};

std::ostream &operator<<(std::ostream &out, const Character &in);

#endif