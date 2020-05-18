/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 20:46:53 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 03:42:21 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string m_name)
    : name(m_name), hit_points(100), max_hit_points(100), energy_point(100),
        max_energy_points(100), level(1), melee_attack_damage(30),
        ranged_attack_damage(20), armor_damage_reduction(5)
{
    std::cout << "Le FR4G-TP " << name << " vient de sortir d'usine." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << name << " est tombé en pièces." << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
    *this = src;
    std::cout << name << " viens d'être copié." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
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

void FragTrap::rangedAttack(std::string const &target)
{
    std::cout << name << " attaque " << target << " avec un lance-pierre " << ranged_attack_damage << " points de dégâts." << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
    std::cout << name << " charge " << target << " au couteau et fait " << melee_attack_damage << " points de dégâts." << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
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

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    unsigned long int i;
    unsigned long int j;
    std::string rand_attack[5] = {"une boite à chaussures", "un citron", "un data-center", "du sable", "la touche \"E\" d'un clavier"};

    if (energy_point < 25)
    {
        std::cout << name << " n'a plus assez d'énérgie pour attaquer " << target << std::endl;
    }
    else
    {
        energy_point -= 25;
        i = (unsigned long int)((unsigned long int)this * (unsigned long int)&target / target.length()) % 500;
        j = (unsigned long int)((unsigned long int)this * (unsigned long int)&target / target.length()) % 1000;
        std::cout << name << " lance " << rand_attack[i / 100] << " sur " << target << " et fait " << j / 10 << " dégâts !" << std::endl;
    }
}