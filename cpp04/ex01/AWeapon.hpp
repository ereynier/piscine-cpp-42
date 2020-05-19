/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 16:21:22 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 17:06:25 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
    protected:
        std::string name;
        int         damage;
        int         apcost;
        AWeapon();

    public:
        AWeapon(std::string const &m_name, int m_apcost, int m_damage);
        virtual ~AWeapon();
        AWeapon(AWeapon const &src);
        
        AWeapon &operator=(AWeapon const &rhs);

        std::string virtual getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;

};

#endif