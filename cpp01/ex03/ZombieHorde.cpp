/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 18:27:16 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/16 23:54:30 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
    int i;
    std::string nameList[5] = {"Joris", "Jean-Phillipe","Camille","Amelie","Gerard"};
    size = n;
    horde = new Zombie[n];
    while (n > 0)
    {
        i = rand() % 5;
        horde[n - 1].setName(nameList[i]);
        n--;
    }
}

void ZombieHorde::announce(void)
{
    int i = 0;
    while (i < size)
    {
        horde[i].advert();
        i++;
    }
}

ZombieHorde::~ZombieHorde()
{
    delete[] horde;
    std::cout << "Tout les Zombies sont anéantis" << std::endl;
}