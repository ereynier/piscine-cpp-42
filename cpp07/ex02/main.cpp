/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 16:33:03 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/21 18:21:59 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
    Array <char> a_char(5);
    Array <int> a_int(5);
    Array <float> a_float(5);

    try
    {
        a_float[5] = 0.5;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    a_float[1] = 0.22;
    std::cout << a_float[1] << std::endl;
    std::cout << a_float.size() << std::endl;

    Array <int> a_int2(a_int);
    std::cout << a_int2.size() << std::endl;
    a_int[2] = 10;
    std::cout << "a_int2[2] = " << a_int2[2] << "\n a_int[2] = " << a_int[2] << std::endl;
    a_int2 = a_int;
    std::cout << "a_int2[2] = " << a_int2[2] << "\n a_int[2] = " << a_int[2] << std::endl;
    a_int[2] = 2;
    std::cout << "a_int2[2] = " << a_int2[2] << "\n a_int[2] = " << a_int[2] << std::endl;
    
    return (0);
}