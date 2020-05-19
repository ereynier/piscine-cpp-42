/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 16:57:01 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 17:57:22 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    Bureaucrat  joris("Joris", 120);
    Bureaucrat  george("George", 10);
    Form        a("Permis de construire", 10, 20);
    Form        b("Laissé passé A38", 1, 1);

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    try
    {
        a.beSigned(joris);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    try
    {
        Form c("passage", 155, 18);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    george.signForm(a);
    a.beSigned(george);
    george.signForm(a);
    george.signForm(b);
    
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    

    return (0);
}