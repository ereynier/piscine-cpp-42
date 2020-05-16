/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 17:04:21 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/16 19:04:12 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string type;
        std::string name;

    public:
        Zombie(std::string m_name, std::string m_type);
        void advert(void);
        Zombie();
        void setName(std::string m_name);
        ~Zombie();
};

#endif