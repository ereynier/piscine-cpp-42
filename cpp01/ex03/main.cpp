/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 18:47:33 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/16 19:16:27 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
    ZombieHorde horde(10);

    std::cout << "-------ANNOUNCE--------" << std::endl;

    horde.announce();

    std::cout << "-------DESTRUCTION--------" << std::endl;

    return (0);
}