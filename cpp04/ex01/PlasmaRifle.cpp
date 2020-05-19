/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 16:55:28 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 18:45:36 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
    : AWeapon("Plasma Rifle", 5, 21)
{
    
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}