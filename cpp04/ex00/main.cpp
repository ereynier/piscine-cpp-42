/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 15:41:03 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 16:43:02 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Victim.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Sorcerer robertII(robert);
    Peon gerard("Gerard");


    std::cout << robert << jim << joe << gerard;
    robert.polymorph(jim);
    robert.polymorph(joe);
    robertII.polymorph(gerard);
    gerard = joe;
    std::cout << robert << jim << joe << gerard;
    return 0;
}