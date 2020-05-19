/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 15:50:42 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 15:55:54 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
    private:
        std::string name;
        Victim();

    public:
        Victim(std::string m_name);  
        ~Victim();
        Victim(Victim const &src);

        Victim &operator=(Victim const &rhs);

        std::string getName() const;

        void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &out, const Victim &in);

#endif