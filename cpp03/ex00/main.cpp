/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 20:46:51 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/17 22:07:58 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap a("Norbert");
    FragTrap b("Michel");
    FragTrap c(a);
    FragTrap d("BLBLBLBL");
    FragTrap e("Jean");

    d = c;
    a.beRepaired(10);
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
    return (0);
}