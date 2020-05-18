/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 20:46:52 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 03:29:34 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    protected:
        FragTrap(int superTrap);

    public:
        FragTrap(std::string m_name);
        ~FragTrap();
        FragTrap();
        FragTrap(FragTrap const &src);
        
        FragTrap &operator=(FragTrap const &rhs);

        void meleeAttack(std::string const &target);
        void rangedAttack(std::string const &target);
        void vaulthunter_dot_exe(std::string const &target);
};

#endif