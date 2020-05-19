/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 19:56:21 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 19:57:02 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDON_HPP
#define PRESIDENTIALPARDON_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string _target;
        PresidentialPardonForm();

    public:
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const &src);

        PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

        void action() const;
};

#endif