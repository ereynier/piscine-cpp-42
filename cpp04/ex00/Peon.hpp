/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 16:02:11 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 16:08:25 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
    public:
        Peon(std::string m_name);
        ~Peon();
};

#endif