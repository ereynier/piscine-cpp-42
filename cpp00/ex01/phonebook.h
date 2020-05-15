/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 17:47:43 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/15 19:23:21 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>

class Phonebook
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal_adress;
    std::string email_adress;
    std::string phone_number;
    std::string birthday_date;
    std::string favorite_meal;
    std::string underwear_color;
    std::string darkest_secret;

public:
    void addContact(void);
    void previewContact(void);
    void printContact(void);
};


#endif