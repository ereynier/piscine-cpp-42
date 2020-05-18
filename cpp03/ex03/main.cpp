/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 20:46:51 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 02:07:39 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
    FragTrap a("Norbert");
    FragTrap b("Michel");
    FragTrap c(a);
    FragTrap d("BLBLBLBL");
    FragTrap e("Jean");

    std::cout << std::endl << std::endl;

    d = c;
    d.beRepaired(10);
    b.meleeAttack("une grenouille");
    c.takeDamage(50);
    c.beRepaired(10);
    e.takeDamage(500);
    e.takeDamage(10);
    e.beRepaired(50);
    a.vaulthunter_dot_exe("Alduin");
    a.vaulthunter_dot_exe("Victor Hugo");
    a.vaulthunter_dot_exe("Carl Jr");
    a.vaulthunter_dot_exe("Descole");
    a.vaulthunter_dot_exe("Pikachu");

    std::cout << std::endl << "-----------------------------------------" << std::endl << std::endl;

    ScavTrap f("Luke");
    ScavTrap g("Clémence");
    ScavTrap h(f);
    ScavTrap i("Arthur");
    ScavTrap j("Jean");

    std::cout << std::endl << std::endl;

    i = h;
    f.beRepaired(10);
    g.meleeAttack("une grenouille");
    h.takeDamage(50);
    h.beRepaired(10);
    j.takeDamage(500);
    j.takeDamage(10);
    j.beRepaired(50);
    f.challengeNewcomer("Dovahkiin");
    f.challengeNewcomer("Laink");
    f.challengeNewcomer("Perséphone");
    f.challengeNewcomer("Dracula");
    f.challengeNewcomer("Red");

    std::cout << std::endl << "-----------------------------------------" << std::endl << std::endl;

    NinjaTrap s("Sasouk");
    NinjaTrap n("Naroute");
    
    std::cout << std::endl << std::endl;

    n.ninjaShoebox(s);
    n.ninjaShoebox(a);
    n.ninjaShoebox(f);

    std::cout << std::endl << "-----------------------------------------" << std::endl << std::endl;

    return (0);
}