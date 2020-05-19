/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 20:11:21 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 21:49:25 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    _functions[0] = &Intern::makeShrubbery;
    _functions[1] = &Intern::makeRobot;
    _functions[2] = &Intern::makePresidential;
}

Intern::~Intern()
{
    
}

Intern::Intern(Intern const &src)
{
    *this = src;
}

Intern &Intern::operator=(Intern const &rhs)
{
    (void)rhs;
    return (*this);
}


/*FUNCTIONS-----------------------------------------------------*/

Form *Intern::makeShrubbery(std::string target)
{
    return ((Form *) new ShrubberyCreationForm(target));    
}

Form *Intern::makeRobot(std::string target)
{
    return ((Form *) new RobotomyRequestForm(target));    
}

Form *Intern::makePresidential(std::string target)
{
    return ((Form *) new PresidentialPardonForm(target));    
}

Form *Intern::makeForm(std::string name, std::string target)
{
    int i = 0;

    Form *form;
    
    while (i < 3)
    {
        if (name == this->_type[i])
        {
            try
            {
                form = (this->*_functions[i])(target);
                std::cout << "Intern create " << name << std::endl;
            }
            catch(std::bad_alloc)
            {
                std::cout << "Creation of " << name << " failed" << std::endl;
                form = 0;
            }
            return (form);
        }    
        i++;
    }
    std::cout << "Unknow form type" << std::endl;
    return (0);
}