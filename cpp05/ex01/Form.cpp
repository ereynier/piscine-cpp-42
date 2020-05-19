/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 15:58:30 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 17:55:32 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*CONSTRUCTOR------------------------------------------------------------*/

Form::Form()
    : _signed(0), _lvl_exec(1), _lvl_sign(1), _name("n/a")
{
    
}

Form::~Form()
{
    
}

Form::Form(std::string name, int lvl_sign, int lvl_exec)
    : _name(name), _lvl_sign(lvl_sign), _lvl_exec(lvl_exec), _signed(0)
{
    if (_lvl_sign < MAX_GRADE)
        throw GradeTooHighException();
    if (_lvl_exec < MAX_GRADE)
        throw GradeTooHighException();
        
    if (_lvl_sign > MIN_GRADE)
        throw GradeTooLowException();
    if (_lvl_exec > MIN_GRADE)
        throw GradeTooLowException();
}

Form::Form(Form const &src)
    : _signed(src.isSigned()), _lvl_exec(src.getLevelExec()), _lvl_sign(src.getLevelSign()), _name(src.getName())
{
    if (_lvl_sign < MAX_GRADE)
        throw GradeTooHighException();
    if (_lvl_exec < MAX_GRADE)
        throw GradeTooHighException();
        
    if (_lvl_sign > MIN_GRADE)
        throw GradeTooLowException();
    if (_lvl_exec > MIN_GRADE)
        throw GradeTooLowException();
}

/*OPERATOR------------------------------------------------------------*/

Form &Form::operator=(Form const &rhs)
{
    if (this != &rhs)
    {
        _signed = rhs._signed;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &out, Form const &in)
{
    out << "--------------------------------------------------\n"
        << "Form name : " << in.getName() << std::endl
        << "State : " << ((in.isSigned()) ? "Signed" : "not Signed") << std::endl
        << "Signature grade req. : " << in.getLevelSign() << std::endl
        << "Execution grade req. : " << in.getLevelExec() << std::endl
        << "--------------------------------------------------" << std::endl;

    return (out);
}

/*ACCESSORS------------------------------------------------------------*/

std::string Form::getName() const
{
    return (_name);
}

bool Form::isSigned() const
{
    return (_signed);
}

int Form::getLevelSign() const
{
    return (_lvl_sign);
}

int Form::getLevelExec() const
{
    return (_lvl_exec);
}

/*FUNCTIONS------------------------------------------------------------*/

bool Form::beSigned(Bureaucrat const &target)
{
    if (target.getGrade() > _lvl_sign)
        throw GradeTooLowException();
    if (_signed)
        return (0);
    else
        _signed = 1;
        
    return (1);
}

/*EXCEPTION------------------------------------------------------------*/

const char *Form::GradeTooLowException::what() const throw()
{
    return ("GradeTooLowException");
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("GradeTooHighException");
}