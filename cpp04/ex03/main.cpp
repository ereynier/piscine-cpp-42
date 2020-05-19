/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 00:15:29 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 02:53:24 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* moi = new Character("moi");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    moi->equip(tmp);
    tmp = src->createMateria("cure");
    moi->equip(tmp);
    ICharacter* bob = new Character("bob");
    moi->use(0, *bob);
    moi->use(1, *bob);
    moi->unequip(0);
    moi->unequip(1);
    moi->equip(tmp);
    moi->use(0, *bob);
    std::cout << "tmp xp : " << tmp->getXP() << std::endl;
    delete bob;
    delete moi;
    delete src;
    
    return 0;
}