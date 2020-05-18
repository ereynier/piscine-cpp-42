/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 01:24:07 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 03:46:26 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(int superTrap)
    : ClapTrap()
{
    energy_point = 100;
    max_energy_points = 100;
    level = 1;
    melee_attack_damage = 60;
    std::cout << "Le SuperNinjaTrap " << name << " est apparu." << std::endl;
}

NinjaTrap::NinjaTrap(std::string m_name)
    : ClapTrap()
{
    name = m_name;
    hit_points = 60;
    max_hit_points = 60;
    energy_point = 120;
    max_energy_points = 120;
    level = 1;
    melee_attack_damage = 60;
    ranged_attack_damage = 5;
    armor_damage_reduction = 0;
    std::cout << "Le NinjaTrap " << name << " est apparu." << std::endl;
}

NinjaTrap::NinjaTrap()
{
    NinjaTrap("");
}

NinjaTrap::~NinjaTrap()
{
    std::cout << name << " est parti en fumée." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
    *this = src;
    std::cout << name << " viens d'être copié." << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &rhs)
{
    ClapTrap::operator=(rhs);
    return (*this);
}

void NinjaTrap::rangedAttack(std::string const &target)
{
    std::cout << name << " attaque " << target << " avec un caillou " << ranged_attack_damage << " points de dégâts." << std::endl;
}

void NinjaTrap::meleeAttack(std::string const &target)
{
    std::cout << name << " attaque discretement " << target << " à la lame secrète " << melee_attack_damage << " points de dégâts." << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
    std::cout << name << " échange un regard avec ce NijaTrap, sans dire un mot." << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &target)
{
    std::cout << name << " saute sur ce FragTrap et lui pulvérise la machoire." << std::endl;
    target.takeDamage(10);
}

void NinjaTrap::ninjaShoebox(ScavTrap &target)
{
    std::cout << name << " contourne ce ScavTrap et lui donne un coup sur la nuque en criant \"Ninjaaaaaa\"." << std::endl;
    target.takeDamage(90);
}