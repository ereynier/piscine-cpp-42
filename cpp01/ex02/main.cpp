/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 17:42:19 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/16 23:53:11 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
    ZombieEvent zombieGen1;
    ZombieEvent zombieGen2;
    zombieGen1.setZombieType("Centurion");
    zombieGen2.setZombieType("Legionnaire");

    std::cout << "-------Zombie Generator-------" << std::endl;

    Zombie Roxanne = Zombie("Roxanne", "Infirmiere");
    Zombie *Paul = zombieGen1.newZombie("Paul");
    Zombie *zombie_1 = zombieGen1.randomChump();
    Zombie *zombie_2 = zombieGen2.randomChump();
    Zombie *zombie_3 = zombieGen2.randomChump();
    Zombie *zombie_4 = zombieGen2.randomChump();

    std::cout << "----------ADVERT---------" << std::endl;

    Roxanne.advert();
    (*Paul).advert();
    (*zombie_1).advert();
    (*zombie_2).advert();
    (*zombie_3).advert();
    (*zombie_4).advert();

    std::cout << "----------DELETE---------" << std::endl;

    delete Paul;
    delete zombie_1;
    delete zombie_2;
    delete zombie_3;
    delete zombie_4;

    return(0);
}