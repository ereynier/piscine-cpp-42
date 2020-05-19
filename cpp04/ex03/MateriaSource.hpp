/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 00:15:25 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/19 02:33:57 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *_inventory[4];

    public:
        MateriaSource(MateriaSource const &src);
        ~MateriaSource();
        MateriaSource();

        MateriaSource &operator=(MateriaSource const &rhs);

        void learnMateria(AMateria *m);
        AMateria *createMateria(std::string const &type);
        
};

#endif