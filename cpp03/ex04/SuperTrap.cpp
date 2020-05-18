/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 02:12:03 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 03:32:07 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string m_name)
    : ClapTrap(), FragTrap(0), NinjaTrap(0)
{
    name = m_name;
    hit_points = FragTrap::hit_points;
    max_hit_points = FragTrap::max_hit_points;
    energy_point = NinjaTrap::energy_point;;
    max_energy_points = NinjaTrap::max_energy_points;
    level = 1;
    melee_attack_damage = NinjaTrap::melee_attack_damage;
    ranged_attack_damage = FragTrap::ranged_attack_damage;
    armor_damage_reduction = FragTrap::armor_damage_reduction;
    std::cout << "Le SuperTrap " << name << " est prêt à tout péter." << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << name << " est mort au combat." << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &src)
{
    *this = src;
    std::cout << name << " viens d'être copié." << std::endl;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &rhs)
{
    ClapTrap::operator=(rhs);
    return (*this);
}

void SuperTrap::rangedAttack(std::string const &target)
{
   FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
    NinjaTrap::meleeAttack(target);
}

void SuperTrap::ninjaShoebox(NinjaTrap &target)
{
    NinjaTrap::ninjaShoebox(target);
}

void SuperTrap::ninjaShoebox(FragTrap &target)
{
    NinjaTrap::ninjaShoebox(target);
}

void SuperTrap::ninjaShoebox(ScavTrap &target)
{
    NinjaTrap::ninjaShoebox(target);
}

void SuperTrap::ninjaShoebox(SuperTrap &target)
{
    std::cout << name << " assène un coup à ce SuperTrap qui riposte." << std::endl;
    target.takeDamage(90);
    takeDamage(10);
}