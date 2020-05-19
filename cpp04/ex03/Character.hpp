/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 00:15:24 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 02:15:36 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *_inventory[4];
        Character();
        
    public:
        ~Character();
        Character(std::string name);
        Character(Character const &src);

        Character &operator=(Character const &rhs);

        std::string const &getName() const;
        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
};

#endif