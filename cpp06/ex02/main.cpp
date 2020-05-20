/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 19:42:13 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/20 20:08:39 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base
{
    public:
        virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

void identify_from_pointer(Base *p)
{
    A *typeA;
    B *typeB;
    C *typeC;

    typeA = dynamic_cast <A*> (p);
    if (typeA)
    {
        std::cout << "it's a A type" << std::endl;
        return ;
    }
    typeB = dynamic_cast <B*> (p);
    if (typeB)
    {
        std::cout << "it's a B type" << std::endl;
        return ;
    }
    typeC = dynamic_cast <C*> (p);
    if (typeC)
    {
        std::cout << "it's a C type" << std::endl;
        return ;
    }
    std::cout << "unkown type" << std::endl;
}

void identify_from_reference(Base &p)
{
    try
    {
        A &typeA = dynamic_cast <A&> (p);
        (void)typeA;
        std::cout << "it's a A type" << std::endl;
        return ;
    }
    catch(const std::bad_cast& e)
    {}
    try
    {
        B &typeB = dynamic_cast <B&> (p);
        std::cout << "it's a B type" << std::endl;
        (void)typeB;
        return ;
    }
    catch(const std::bad_cast& e)
    {}
    try
    {
        C &typeC = dynamic_cast <C&> (p);
        std::cout << "it's a C type" << std::endl;
        (void)typeC;
        return ;
    }
    catch(const std::bad_cast& e)
    {}
    std::cout << "unkown type" << std::endl;
    
}

int main()
{
    A   *a_ptr = new A;
    A   a;
    A   &a_ref = a;

    identify_from_pointer(a_ptr);
    identify_from_reference(a_ref);

    B   *b_ptr = new B;
    B   b;
    B   &b_ref = b;

    identify_from_pointer(b_ptr);
    identify_from_reference(b_ref);

    C   *c_ptr = new C;
    C   c;
    C   &c_ref = c;

    identify_from_pointer(c_ptr);
    identify_from_reference(c_ref);
}
