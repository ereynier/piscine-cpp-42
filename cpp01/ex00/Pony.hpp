/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 02:33:20 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/16 18:58:14 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <string>
#include <iostream>

class Pony
{
private:
    int weight;
    int size;
    std::string name;
public:
    Pony(std::string m_name, int m_size, int m_weight);
    void showName(void);
    void showWeightAndSize(void);
    void changeName(std::string m_name);
    ~Pony();
};

#endif