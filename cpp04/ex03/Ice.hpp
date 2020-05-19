/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 00:22:58 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 02:37:11 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice(Ice const &src);

        Ice &operator=(Ice const &rhs);

        void use(ICharacter &target);
        AMateria *clone() const;
};

#endif