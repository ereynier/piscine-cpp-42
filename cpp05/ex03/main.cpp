/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 21:29:11 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 21:49:56 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern joe;
    Form* a;
    Form* b;
    Form* c;
    Form* d;
    Bureaucrat patrice("Patrice", 3);

    a = joe.makeForm("robotomy request", "Ben");
    b = joe.makeForm("presidential pardon", "Ben");
    c = joe.makeForm("shrubbery creation", "Ben");
    d = joe.makeForm("patate", "Ben");

    patrice.signForm(*a);
    patrice.signForm(*b);
    patrice.signForm(*c);

    patrice.executeForm(*a);
    patrice.executeForm(*b);
    patrice.executeForm(*c);
    
}