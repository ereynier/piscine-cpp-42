/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 02:42:55 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/16 18:59:01 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string m_name, int m_size, int m_weight)
{
    name = m_name;
    size = m_size;
    weight = m_weight;
}

void Pony::showName(void)
{
    std::cout << "my name is "<< name << std::endl;
}

void Pony::showWeightAndSize(void)
{
    std::cout << "Size " << size << " for " << weight << " weight." << std::endl;
}

Pony::~Pony()
{
    std::cout << "destruction du pony" << std::endl;
}