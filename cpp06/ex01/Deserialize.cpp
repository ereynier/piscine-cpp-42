/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Deserialize.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 18:59:40 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/20 19:35:30 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "serializer.h"

Data *deserialize(void *raw)
{
    Data *out = new Data;
    int i = 0;
    char *r = (char*)raw;

    out->s1 = "";
    out->s2 = "";
    while (i < 8)
    {
        out->s1 += r[i];
        out->s2 += r[i + 8 + 4];
        i++;
    }

    i = 0;
    out->n = 0;
    while (i < 4)
    {
        out->n = out->n << 8;
        out->n += r[i + 8];
        i++;
    }

    return (out);
}