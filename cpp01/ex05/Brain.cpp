/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 19:32:16 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/16 23:58:56 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

std::string Brain::identifier()
{
    std::stringstream ss;
    ss << this;
    return (ss.str());
}

Brain::Brain()
{
    iq = 130;
    weight = 15;
    pressure = 10;
}