/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 17:33:46 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 18:48:52 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"
#include <iostream>

class RadScorpion : public Enemy
{
    public:
        RadScorpion();
        ~RadScorpion();
        RadScorpion(RadScorpion const &src);

        RadScorpion &operator=(RadScorpion const &rhs);
};

#endif