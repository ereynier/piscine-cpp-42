/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 17:02:39 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 18:24:37 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:
        PowerFist();
        void attack() const;
};

#endif