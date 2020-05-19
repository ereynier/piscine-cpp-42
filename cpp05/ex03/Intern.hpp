/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 20:11:24 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 21:48:25 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern
{
    typedef Form *(Intern::*fPointer)(std::string);
    
    private:
        Form *makeShrubbery(std::string target);
        Form *makeRobot(std::string target);
        Form *makePresidential(std::string target);
        
        fPointer _functions[3];
        std::string _type[3] = {
            "presidential pardon",
            "robotomy request",
            "shrubbery creation"
        };

    public:
        Intern();
        ~Intern();
        Intern(Intern const &src);

        Intern &operator=(Intern const &rhs);

        Form *makeForm(std::string name, std::string target);

};

#endif