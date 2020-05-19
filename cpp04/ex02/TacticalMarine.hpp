/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 20:15:30 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 21:23:50 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine();
        ~TacticalMarine();
        TacticalMarine(TacticalMarine const &src);
        TacticalMarine &operator=(TacticalMarine const &rhs);
        
        ISpaceMarine *clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};

#endif