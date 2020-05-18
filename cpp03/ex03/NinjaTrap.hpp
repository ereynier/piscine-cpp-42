/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 01:24:05 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 01:54:15 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
    public:
        NinjaTrap(std::string m_name);
        ~NinjaTrap();
        NinjaTrap(NinjaTrap const &src);
        
        NinjaTrap &operator=(NinjaTrap const &rhs);

        void meleeAttack(std::string const &target);
        void rangedAttack(std::string const &target);
        void ninjaShoebox(NinjaTrap &target);
        void ninjaShoebox(FragTrap &target);
        void ninjaShoebox(ScavTrap &target);
};

#endif