/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 00:17:10 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 00:37:04 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string m_name)
    : name(m_name), hit_points(100), max_hit_points(100), energy_point(50),
        max_energy_points(50), level(1), melee_attack_damage(20),
        ranged_attack_damage(15), armor_damage_reduction(3)
{
    std::cout << "Le ScavTrap " << name << " vient de finir son assemblage." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << name << " vient d'être pulvérisé." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
    *this = src;
    std::cout << name << " viens d'être copié." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
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

void ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << name << " utilse son lance-flamme sur " << target << " et inflige " << ranged_attack_damage << " points de dégâts." << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << name << " fonce tête baissée sur " << target << " qui reçoit " << ranged_attack_damage << " points de dégâts." << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
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

void ScavTrap::beRepaired(unsigned int amount)
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

void ScavTrap::challengeNewcomer(std::string const &target)
{
    unsigned long int i;
    unsigned long int j;
    std::string rand_challenge[5] = {"coder le comportement d'un abricot.", "tuer un dragon avec une petite cuillère.", "lui donner tout son argent.", "parler en langue Elfe.", "lui présenter le \"laissé passer A38\"."};

    i = (unsigned long int)((unsigned long int)this * (unsigned long int)&target / target.length()) % 500;
    std::cout << name << " challenge " << target << " de " << rand_challenge[i / 100] << std::endl;
}