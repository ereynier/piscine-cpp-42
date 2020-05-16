/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 02:40:30 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/16 19:01:21 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(void)
{
    Pony *Norbert;
    Norbert = new Pony("Norbert", 8, 175);
    std::cout << "I'm on the heap" << std::endl;
    (*Norbert).showName();
    (*Norbert).showWeightAndSize();
    delete Norbert;
}

void ponyOnTheStack(void)
{
    Pony Jean("Jean", 2, 180);
    std::cout << "I'm on the stack" << std::endl;
    Jean.showName();
    Jean.showWeightAndSize();
}

int main(void)
{
    ponyOnTheStack();
    std::cout << "--------------------------" << std::endl;
    ponyOnTheHeap();
    return (1);
}