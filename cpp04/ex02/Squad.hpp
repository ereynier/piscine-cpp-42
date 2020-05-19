/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 19:24:23 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/18 21:44:55 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

typedef struct  s_squad
{
    ISpaceMarine    *unit;
    s_squad         *next;
}               t_squad;


class Squad : public ISquad
{
    private:
        int count;
        s_squad *squad;

    public:
        Squad();
        Squad(const Squad &src);
        ~Squad();

        Squad &operator=(const Squad &rhs);

        int getCount() const;
        ISpaceMarine *getUnit(int N) const;
        int push(ISpaceMarine *unit);
};

#endif