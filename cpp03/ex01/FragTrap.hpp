/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 20:46:52 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/17 21:45:04 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>

class FragTrap
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
        FragTrap(std::string m_name);
        ~FragTrap();
        FragTrap(FragTrap const &src);
        
        FragTrap &operator=(FragTrap const &rhs);

        void rangedAttack(std::string const &target);
        void meleeAttack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void vaulthunter_dot_exe(std::string const &target);
};

#endif