/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 15:38:02 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/21 16:10:50 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T, typename S>
void iter(T *array, int size, S (*f)(T param))
{
    int i = 0;

    while (i < size)
    {
        f(array[i]);
        i++;
    }
}

template <typename T>
void inc(T a)
{
    a++;
    std::cout << a << std::endl;
}

char slt(int i)
{
    std::cout << i * 100 << std::endl;
    return ('a');    
}

int main()
{
    int array[20] = {4,54,852,6,4,8,2,3,0,1,2,5,45,85,78,6,3,2,45,96};
    char char_tab[20] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t'};

    ::iter(array, 20, slt);
    iter <char,void> (char_tab, 20, inc <char>);
}
