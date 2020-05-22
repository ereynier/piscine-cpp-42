/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 16:08:03 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/22 16:33:56 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <list>
#include <iostream>

int main()
{
    std::vector <int>   v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::list <int>   l = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    try
    {
        easyfind(v, 8);
        std::cout << "found 8" << std::endl;
    }
    catch(std::string &e)
    {
        std::cout << e << std::endl;
    }

    try
    {
        easyfind(v, 150);
        std::cout << "found 150" << std::endl;
    }
    catch(std::string &e)
    {
        std::cout << e << std::endl;
    }
    
        try
    {
        easyfind(l, 8);
        std::cout << "found 8" << std::endl;
    }
    catch(std::string &e)
    {
        std::cout << e << std::endl;
    }

    try
    {
        easyfind(l, 150);
        std::cout << "found 150" << std::endl;
    }
    catch(std::string &e)
    {
        std::cout << e << std::endl;
    }

}