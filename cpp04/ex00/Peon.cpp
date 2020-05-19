/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 16:04:25 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 16:09:06 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string m_name)
    : Victim(m_name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}