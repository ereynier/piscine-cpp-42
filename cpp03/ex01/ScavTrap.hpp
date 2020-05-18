/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 00:17:08 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 00:19:10 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>

class ScavTrap
{
    private:
        std::string name;
        int hit_points;
        int max_hit_points;
        int energy_point;
        int max_energy_points;
        int level;
        int melee_attack_damage;
        int ranged_attack_damage;
        int armor_damage_reduction;

    public:
        ScavTrap(std::string m_name);
        ~ScavTrap();
        ScavTrap(ScavTrap const &src);
        
        ScavTrap &operator=(ScavTrap const &rhs);

        void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void challengeNewcomer(std::string const &target);
};

#endif