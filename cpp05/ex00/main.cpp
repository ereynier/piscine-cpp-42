/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 14:58:25 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 15:57:18 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat george("George", 15);
    Bureaucrat joris("Joris", 38);

    std::cout << joris << george << std::endl;

    joris = george;

    std::cout << joris << george << std::endl;

    george.incrementGrade();
    joris.decrementGrade();

    std::cout << joris << george << std::endl;

    std::cout << std::endl << std::endl;

    try
    {
        Bureaucrat gill("Gill", 15000);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat gill("Gill", 0);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    Bureaucrat patricia("Patricia", 150);
    Bureaucrat michel("Michel", 1);

    std::cout << std::endl << std::endl;

    try
    {
        patricia.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        michel.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}