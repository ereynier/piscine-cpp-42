/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 01:21:05 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/20 17:50:35 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ios>
#include <sstream>

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "literal value needed" << std::endl;
        return (1);
    }
    
    std::string value = av[1];
    int i;
    double d;
    float f;
    char c;

    int point = value.find(".");
    int decimals = 0;

    if (point != -1)
    {
        while (value[++point] && value[point] >= '0' && value[point] <= '9')
            decimals++;
    }
    else
        decimals = 1;

    std::cout.precision(decimals);
    std::cout.setf(std::ios::fixed, std::ios::floatfield);

    try
    {
        c = static_cast <char> (std::stoi(value));

        if (std::stoi(value) > 127)
            std::cout << "char: impossible" << std::endl;
        else if (std::stoi(value) > 126 || std::stoi(value) < 32)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << c << "'" << std::endl;
        
    }
    catch(const std::exception& e)
    {
        std::cout << "char: impossible" << std::endl;
    }
    
    try
    {
        i = static_cast <int> (std::stoi(value));
        std::cout << "int: "<< i << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "int: impossible" << std::endl;
    }

    try
    {
        f = static_cast <float> (std::stof(value));
        std::cout << "float: "<< f << "f" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "float: impossible" << std::endl;
    }

    try
    {
        d = static_cast <double> (std::stod(value));
        std::cout << "double: "<< d << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "double: impossible" << std::endl;
    }
    


    return (0);
}