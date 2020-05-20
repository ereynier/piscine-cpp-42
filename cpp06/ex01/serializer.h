/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serializer.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 18:00:23 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/20 19:00:24 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
#define SERIALIZER_H

#include <stdlib.h>
#include <string>
#include <iostream>

typedef struct Data 
{
    std::string s1;
    std::string s2;
    int n;
} t_Data;

void *serialize(void);
Data *deserialize(void *raw);

#endif