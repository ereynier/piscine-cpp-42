/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 16:35:55 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/22 18:26:28 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int main()
{
    Span sp = Span(5);

    try
    {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    

    sp.addNumber(5);

    try
    {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    try
    {
        sp.addNumber(11);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    Span sp2 = Span(100);
    sp2.addNumber(544);
    sp2.addNumber(6);
    sp2.addNumber(-9);
    sp2.addNumber(54);
    sp2.addNumber(25);
    sp2.addNumber(452);
    sp2.addNumber(12);
    sp2.addNumber(1500);
    sp2.addNumber(588);
    sp2.addNumber(88);
    sp2.addNumber(9);
    sp2.addNumber(147);
    sp2.addNumber(358);
    sp2.addNumber(1498);
    sp2.addNumber(1);
    sp2.addNumber(1000);
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;

}