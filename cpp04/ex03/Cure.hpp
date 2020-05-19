/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 00:15:23 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 02:37:14 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(Cure const &src);

        Cure &operator=(Cure const &rhs);

        void use(ICharacter &target);
        AMateria *clone() const;
};

#endif