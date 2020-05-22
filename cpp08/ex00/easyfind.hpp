/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 16:08:07 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/22 16:33:02 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string>
#include <algorithm>

template <typename T>
void easyfind(T container, int to_find)
{
    if (std::find(container.begin(), container.end(), to_find) == container.end())
        throw "value : " + std::to_string(to_find) + " not found in container.";
}

#endif