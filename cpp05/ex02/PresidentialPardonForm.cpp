/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 19:56:10 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 20:03:08 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : Form("PresidentialPardonForm", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : Form("PresidentialPardonForm",25, 5), _target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
    : Form("PresidentialPardonForm", 25, 5)
{
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    (void)rhs;
    return (*this);
}

void PresidentialPardonForm::action() const
{
    std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}