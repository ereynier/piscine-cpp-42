/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 16:26:37 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/21 18:18:29 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
    private:
        T *_array;
        unsigned int _size;

    public:

        class BadAccess : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        Array();
        Array(unsigned int n);
        Array(Array<T> const &src);
        ~Array();

        Array &operator=(Array const &rhs);

        T &operator[](unsigned int i);

        unsigned int size() const;
};

template <typename T>
Array<T>::Array()
    :  _array(0), _size(0)
{

}

template <typename T>
Array<T>::~Array()
{
    if (_array)
        delete[] _array;
}

template <typename T>
Array<T>::Array(unsigned int n)
    : _array(new T[n]), _size(n)
{
    
}

template <typename T>
Array<T>::Array(Array<T> const &src)
    : _array(new T[src._size]), _size(src._size)
{
    *this = src;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &rhs)
{
    unsigned int i = 0;
    if (&rhs != this)
    {
        delete[] _array;
        _array = new T[rhs._size];
        _size = rhs._size;
        while(i < _size - 1)
        {
            _array[i] = rhs._array[i];
            i++;
        }
    }
    return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
    if (i > _size - 1)
        throw BadAccess();
    else
        return (_array[i]);
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (_size);
}

template <typename T>
const char *Array<T>::BadAccess::what() const throw()
{
    return ("Bad Access");
}

#endif