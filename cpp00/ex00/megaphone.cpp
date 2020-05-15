/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 16:55:25 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/15 17:46:42 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (i < ac)
    {
        j = 0;
        while (av[i][j])
        {
            av[i][j] = toupper(av[i][j]);
            j++;
        }
        std::cout << av[i] << " ";
        i++;
    }
    std::cout << std::endl;
    return (0);
}