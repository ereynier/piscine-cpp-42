/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 02:12:13 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 03:13:45 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
    public:
        SuperTrap(std::string m_name);
        ~SuperTrap();
        SuperTrap(SuperTrap const &src);
        
        SuperTrap &operator=(SuperTrap const &rhs);

        void meleeAttack(std::string const &target);
        void rangedAttack(std::string const &target);
        void ninjaShoebox(SuperTrap &target);
        void ninjaShoebox(FragTrap &target);
        void ninjaShoebox(NinjaTrap &target);
        void ninjaShoebox(ScavTrap &target);
};

#endif