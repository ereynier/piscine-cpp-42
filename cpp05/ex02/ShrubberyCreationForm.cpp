/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 18:36:27 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 19:35:00 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("ShrubberyCreationForm", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : Form("ShrubberyCreationForm",145,137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
    : Form("ShrubberyCreationForm", 145, 137)
{
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    (void)rhs;
    return (*this);
}

void ShrubberyCreationForm::action() const
{
    std::string tree = 
            "               v .   ._, |_  .,\n"
            "         `-._\\/  .  \\ /    |/_\n"
            "             \\\\  _\\, y | \\//\n"
            "         _\\_.___\\\\, \\\\/ -.\\||\n"
            "         `7-,--.`._||  / / ,\n"
            "         /'     `-. `./ / |/_.'\n"
            "                     |    |//\n"
            "                     |_    /\n"
            "                     |-   |\n"
            "                     |   =|\n"
            "                     |    |\n"
            "                    / ,  . \\\n\n\n";

    std::ofstream outfile(std::string(_target + std::string("_shrubbery")));

    if (outfile.is_open())
    {
        outfile << tree;
        outfile << tree;
        outfile << tree;
        outfile.close();
    }
}