/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 00:42:36 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 01:33:57 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : name("noName"), hit_points(1), max_hit_points(1), energy_point(1),
        max_energy_points(1), level(1), melee_attack_damage(1),
        ranged_attack_damage(1), armor_damage_reduction(1)
{
    std::cout << "ClapTrap " << name << " généré." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << name << " est en pièces détachés." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    *this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
    
    if (this != &rhs)
    {
        name = rhs.name;
        hit_points = rhs.hit_points;
        max_hit_points = rhs.max_hit_points;
        energy_point = rhs.energy_point;
        max_energy_points = rhs.max_energy_points;
        level = rhs.level;
        melee_attack_damage = rhs.melee_attack_damage;
        ranged_attack_damage = rhs.ranged_attack_damage;
        armor_damage_reduction = rhs.armor_damage_reduction;
    }
    return (*this);
}

void ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << name << " attaque " << target << " à distance et fait " << ranged_attack_damage << " points de dégâts." << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << name << " charge " << target << " au corps à corps et fait " << ranged_attack_damage << " points de dégâts." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount - armor_damage_reduction > hit_points)
    {
        hit_points = 0;
        std::cout << name << " tombe à 0 HP" << std::endl;
    }
    else
    {
        hit_points -= (amount - armor_damage_reduction);
        std::cout << name << " prend " << amount - armor_damage_reduction << " dégâts et tombe à " << hit_points << " HP" << std::endl;
    }    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_points == max_hit_points)
    {
        std::cout << name << " essaye de se soigner mais est déjà full avec " << max_hit_points << " HP." << std::endl;
    }
    else if (hit_points + amount > max_hit_points)
    {
        std::cout << name << " se soigne à bloc et a " << max_hit_points << " HP." << std::endl;
        hit_points = 100;
    }
    else
    {
        std::cout << name << " se soigne et passe de " << hit_points << " à " << hit_points + amount << " HP." << std::endl;
        hit_points += amount;
    }
}