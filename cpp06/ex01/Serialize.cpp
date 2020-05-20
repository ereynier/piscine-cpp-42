/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 17:52:28 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/20 19:24:06 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "serializer.h"

void *serialize(void)
{
    /*
    int i = rand();
    char s1[8];
    char s2[8];

    
    while (j < 8)
    {
        s1[j] = alphanum[rand() % 62];
        s2[j] = alphanum[rand() % 62];
    }
    */
    int j = 0;
    int i = 555885348;
    char s1[8] = {'0','1','a','b','h','8','9','p'};
    char s2[8] = {'5','2','8','n','f','5','u','e'};
    unsigned char *out = new unsigned char[20];

    while (j < 8)
    {
        out[j] = s1[j];
        out[j + 8 + 4] = s2[j];
        j++;
    }

    out[8] = (i >> 24) & 0xFF;
    out[9] = (i >> 16) & 0xFF;
    out[10] = (i >> 8) & 0xFF;
    out[11] = i & 0xFF;

    return ((void*)out);
}