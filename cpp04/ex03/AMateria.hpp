/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 00:23:48 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 02:37:17 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
    private:
        unsigned int _xp;
        std::string _type;
        
    protected:
        AMateria();
        
    public:
        AMateria(AMateria const &src);
        virtual ~AMateria();
        AMateria(std::string type, unsigned int xp);

        AMateria &operator=(AMateria const &rhs);

        std::string const &getType() const;
        unsigned int getXP() const;

        void setXP(unsigned int xp);

        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);
};

#endif