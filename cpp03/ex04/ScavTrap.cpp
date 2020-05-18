/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 00:17:10 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 03:21:45 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string m_name)
    : ClapTrap()
{
    name = m_name;
    hit_points= 100;
    max_hit_points = 100;
    energy_point = 50;
    max_energy_points = 50;
    level = 1;
    melee_attack_damage = 20;
    ranged_attack_damage = 15;
    armor_damage_reduction = 3;
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
    ClapTrap::operator=(rhs);
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

void ScavTrap::challengeNewcomer(std::string const &target)
{
    unsigned long int i;
    unsigned long int j;
    std::string rand_challenge[5] = {"coder le comportement d'un abricot.", "tuer un dragon avec une petite cuillère.", "lui donner tout son argent.", "parler en langue Elfe.", "lui présenter le \"laissé passer A38\"."};

    i = (unsigned long int)((unsigned long int)this * (unsigned long int)&target / target.length()) % 500;
    std::cout << name << " challenge " << target << " de " << rand_challenge[i / 100] << std::endl;
}