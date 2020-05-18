/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 00:17:08 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 01:44:00 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string m_name);
        ~ScavTrap();
        ScavTrap(ScavTrap const &src);
        
        ScavTrap &operator=(ScavTrap const &rhs);

        void meleeAttack(std::string const &target);
        void rangedAttack(std::string const &target);
        void challengeNewcomer(std::string const &target);
};

#endif