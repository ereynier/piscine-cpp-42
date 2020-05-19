/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 17:02:32 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 18:45:43 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist()
    : AWeapon("Power Fist", 8, 50)
{

}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}