/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 14:58:23 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 17:55:57 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*CONSTRUCTOR------------------------------------------------------------*/

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

/*OPERATOR------------------------------------------------------------*/

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

/*ACCESSORS------------------------------------------------------------*/

std::string Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}

/*FUNCTIONS------------------------------------------------------------*/

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

void Bureaucrat::signForm(Form &form)
{
    try
    {
        if (form.beSigned(*this))
            std::cout << this->getName() << " signs " << form.getName() << std::endl;
        else
            std::cout << this->getName() << " can't sign " << form.getName() << " because " << "form already signed" << std::endl;
    }
    catch(std::exception &reason)
    {
        std::cout << this->getName() << " can't sign " << form.getName() << " because " << reason.what() << std::endl;
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