/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 14:58:23 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 15:56:35 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
    *this = src;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
    : _name(name)
{
    if (grade > MIN_GRADE)
        throw GradeTooLowException();
    else if (grade < MAX_GRADE)
        throw GradeTooHighException();
    else
        _grade = grade;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
    if (this != &rhs)
    {
        _grade = rhs._grade;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &in)
{
    out << in.getName() << ", bureaucrat grade " << in.getGrade() << std::endl;
    return (out);
}

std::string Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

void Bureaucrat::incrementGrade()
{
    if (_grade > MAX_GRADE)
    {
        _grade--;
    }
    else
    {
        throw GradeTooHighException();
    }
}

void Bureaucrat::decrementGrade()
{
    if (_grade < MIN_GRADE)
    {
        _grade++;
    }
    else
    {
        throw GradeTooLowException();
    }
}

/*EXCEPTION------------------------------------------------------------*/

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("GradeTooLowException");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("GradeTooHighException");
}