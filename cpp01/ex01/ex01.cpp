/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 03:35:59 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/16 14:32:28 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void    memoryLeak()
{
    std::string*    panthere = new std::string("String panthere");
    if (!panthere)
    {
        delete panthere;
            return ;
    }
    
    std::cout << *panthere << std::endl;

    delete panthere;
}
