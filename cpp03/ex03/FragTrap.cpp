/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 20:46:53 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 03:41:54 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string m_name)
    : ClapTrap()
{
    name = m_name;
    hit_points = 100;
    max_hit_points = 100;
    energy_point = 100;
    max_energy_points = 100;
    level = 1;
    melee_attack_damage = 30;
    ranged_attack_damage = 20;
    armor_damage_reduction = 5;
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
    ClapTrap::operator=(rhs);
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