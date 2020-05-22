/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 16:35:38 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/22 20:08:14 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>


int main() {

	MutantStack<int> mstack;
    MutantStack<int> mstack2;
    
    std::cout << "empty: " << mstack.empty() << std::endl;
    
	mstack.push(5);
	mstack.push(17);

	std::cout << "Top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
    std::cout << "begin: " << *it << std::endl;
    std::cout << "end: " << *ite << std::endl;
	++it;
	--it;
	while (it != ite) {
		std::cout << "Iter: " << *it << std::endl;
		++it;
	}
    std::cout << "empty: " << mstack.empty() << std::endl;

    mstack2.push(30);
	mstack2.push(50);
	mstack2.push(7370);
    
    mstack.swap(mstack2);

    it = mstack.begin();
    ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << "Iter: " << *it << std::endl;
		++it;
	}

    std::cout << std::endl << "mstack2 iter --------------------------" << std::endl << std::endl;

    it = mstack2.begin();
    ite = mstack2.end();
	++it;
	--it;
	while (it != ite) {
		std::cout << "Iter: " << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);
	return 0;
}