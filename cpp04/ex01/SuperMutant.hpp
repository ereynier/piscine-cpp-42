/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 17:21:52 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 18:49:45 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"
#include <iostream>

class SuperMutant : public Enemy
{
    public:
        SuperMutant();
        ~SuperMutant();
        SuperMutant(SuperMutant const &src);

        SuperMutant &operator=(SuperMutant const &rhs);

        void takeDamage(int damage);
};

#endif