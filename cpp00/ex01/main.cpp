/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 17:11:21 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/15 19:23:19 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int main()
{
    int i = 0;
    int j;
    int num;
    
    std::string s;
    std::string cmd;
    Phonebook contact[8];

    while (cmd.compare("EXIT") != 0)
    {
        std::cout << "Enter command : ADD / SEARCH / EXIT :" << std::endl;
        std::getline (std::cin, cmd);

        if (cmd.compare("ADD") == 0)
        {
            if (i == 8)
            {
                std::cout << "Too much contact in your phonebook (it's a bad phonebook you know)" << std::endl;
            }
            else
            {
                contact[i].addContact();
                i++;
            }
        }
        else if (cmd.compare("SEARCH") == 0)
        {
            j = 0;
            if (i == 0)
                std::cout << "No contact in phonebook" << std::endl;
            else
            {
                std::cout << "*----------*----------*----------*----------*" << std::endl;
                while (j < i)
                {
                    std::cout << "|         " << j + 1;
                    contact[j].previewContact();
                    j++;
                }
                std::cout << "*----------*----------*----------*----------*" << std::endl;
                std::cout << "Enter contact number to show" << std::endl;
                std::getline (std::cin, s);
                try
                {
                    num = std::stoi(s) - 1;
                    if (num > i || num < 0 || num >= 8)
                        std::cout << "Too high number (or inferior to 0)" << std::endl;
                    else
                        contact[num].printContact();
                }
                catch (std::invalid_argument const &e)
                {
                    std::cout << "Invalid argument" << std::endl;
                }
                catch (std::out_of_range const &e)
                {
                    std::cout << "Too high number (really ?)" << std::endl;
                }
            }
        }
    }
    std::cout << "Program closed and contacts suppressed." << std::endl;
    return(0);
}