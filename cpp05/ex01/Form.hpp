/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 15:58:28 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 17:52:06 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    private:
        std::string const   _name;
        bool                _signed;
        int const           _lvl_sign;
        int const           _lvl_exec;

        Form();
        
    public:

        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        };

        Form(std::string name, int lvl_sign, int lvl_exec);
        ~Form();
        Form(Form const &src);

        Form &operator=(Form const &);

        bool beSigned(Bureaucrat const &target);
        
        std::string getName() const;
        int getLevelSign() const;
        int getLevelExec() const;
        bool isSigned() const;
};

std::ostream &operator<<(std::ostream &out, Form const &in);

#endif