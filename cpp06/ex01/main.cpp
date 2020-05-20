/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 18:37:27 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/20 19:36:00 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "serializer.h"

int main()
{
    void *s;
    Data *d;

    s = serialize();

    std::cout << (char*)s << std::endl;

    d = deserialize(s);

    std::cout << d->s1 << std::endl << d->n << std::endl << d->s2 << std::endl;

    return (0);
}