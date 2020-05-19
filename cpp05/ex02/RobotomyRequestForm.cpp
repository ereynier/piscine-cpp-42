/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 19:44:45 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 20:03:21 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : Form("RobotomyRequestForm", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : Form("RobotomyRequestForm",72,45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
    : Form("RobotomyRequestForm", 72, 45)
{
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    (void)rhs;
    return (*this);
}

void RobotomyRequestForm::action() const
{
    static unsigned int time = 0;

    if (time++ % 2)
    {
        std::cout << "* drilling noise * " << _target << " has been robotomized successfully" << std::endl;
    }
    else
    {
        std::cout << "* drilling noise * " << _target << " has failed to be robotomized" << std::endl;
    }
}