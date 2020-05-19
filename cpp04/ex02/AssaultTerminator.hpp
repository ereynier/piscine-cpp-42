/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 20:41:26 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 21:06:46 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator();
        ~AssaultTerminator();
        AssaultTerminator(AssaultTerminator const &src);
        AssaultTerminator &operator=(AssaultTerminator const &rhs);
        
        ISpaceMarine *clone() const;
        void battleCry() const;
        void rangedAttack() const;
        void meleeAttack() const;
};

#endif