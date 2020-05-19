/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 16:57:01 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 20:05:57 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat              joris("Joris", 150);
    Bureaucrat              george("George", 10);
    Bureaucrat              patrice("Patrice", 3);
    PresidentialPardonForm  a("Jean luc");
    ShrubberyCreationForm   b("maison");
    RobotomyRequestForm     c("Will Smith");

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    try
    {
        george.executeForm(b);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    george.signForm(b);
    george.executeForm(b);

    try
    {
        joris.executeForm(a);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    patrice.signForm(a);
    patrice.signForm(c);

    std::cerr << std::endl;

    patrice.executeForm(a);
    patrice.executeForm(c);
    patrice.executeForm(c);
    patrice.executeForm(c);
    

    return (0);
}