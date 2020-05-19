/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 15:15:37 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 15:59:18 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCER_HPP
#define SORCER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
    private:
        std::string name;
        std::string title;
        Sorcerer();

    public:
        Sorcerer(std::string m_name, std::string m_title);  
        ~Sorcerer();
        Sorcerer(Sorcerer const &src);

        Sorcerer &operator=(Sorcerer const &rhs);

        std::string getName() const;
        std::string getTitle() const;

        void polymorph(Victim const &target) const;
};

std::ostream &operator<<(std::ostream &out, const Sorcerer &in);

#endif