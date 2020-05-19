/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 19:25:33 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 20:59:47 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP

class ISpaceMarine
{
    public:
    virtual ~ISpaceMarine() {}
    virtual ISpaceMarine* clone() const = 0;
    virtual void battleCry() const = 0;
    virtual void rangedAttack() const = 0;
    virtual void meleeAttack() const = 0;
};

#endif