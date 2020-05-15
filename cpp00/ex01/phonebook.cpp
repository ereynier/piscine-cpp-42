/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 17:56:35 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/15 19:23:20 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void Phonebook::addContact(void)
{
    std::string str;
    std::cout << "Enter first name :" << std::endl;
    std::getline (std::cin, str);
    first_name = str;
    std::cout << "Enter last name :" << std::endl;
    std::getline (std::cin, str);
    last_name = str;
    std::cout << "Enter nickname :" << std::endl;
    std::getline (std::cin, str);
    nickname = str;
    std::cout << "Enter login :" << std::endl;
    std::getline (std::cin, str);
    login = str;
    std::cout << "Enter postal adress :" << std::endl;
    std::getline (std::cin, str);
    postal_adress = str;
    std::cout << "Enter email adress :" << std::endl;
    std::getline (std::cin, str);
    email_adress = str;
    std::cout << "Enter phone number :" << std::endl;
    std::getline (std::cin, str);
    phone_number = str;
    std::cout << "Enter birthday date :" << std::endl;
    std::getline (std::cin, str);
    birthday_date = str;
    std::cout << "Enter favorite meal :" << std::endl;
    std::getline (std::cin, str);
    favorite_meal = str;
    std::cout << "Enter underwear color :" << std::endl;
    std::getline (std::cin, str);
    underwear_color = str;
    std::cout << "Enter darkest secret :" << std::endl;
    std::getline (std::cin, str);
    darkest_secret = str;
}

void Phonebook::previewContact(void)
{
    std::string str;
    int i;
    int j = 0;

    while (j < 3)
    {
        i = 0;
        std::cout << "|";
        if (j == 0)
            str = first_name;
        else if (j == 1)
            str = last_name;
        else
            str = nickname;
        if (str.size() >= 10)
        {
            str = str.substr(0,9);
            str.push_back('.');
        }
        else
        {
            i = 10 - str.size();
            while (i-- > 0)
                std::cout << " ";
        }
        std::cout << str;
        j++;
    }
    std::cout << "|" << std::endl;
}

void Phonebook::printContact(void)
{
    std::cout << "First name :" << first_name << std::endl;
    std::cout << "Last name :" << last_name << std::endl;
    std::cout << "Nickname :" << nickname << std::endl;
    std::cout << "Login :" << login << std::endl;
    std::cout << "Postal adress :" << postal_adress << std::endl;
    std::cout << "Email adress :" << email_adress << std::endl;
    std::cout << "Phone number :" << phone_number << std::endl;
    std::cout << "Birthday date :" << birthday_date << std::endl;
    std::cout << "Favorite meal :" << favorite_meal << std::endl;
    std::cout << "Underwear color :" << underwear_color << std::endl;
    std::cout << "Darkest secret :" << darkest_secret << std::endl;
}