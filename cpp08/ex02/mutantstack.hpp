/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 18:26:46 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/22 20:08:00 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <vector>
#include <cstdlib>

template <typename T>
class MutantStack : public std::stack<T>
{
    private:
        std::vector<T> _tab;

    public:
        MutantStack() {};
        ~MutantStack() {};
        MutantStack(const MutantStack &src)
        {
            *this = src;
        };

        MutantStack operator=(const MutantStack &rhs)
        {
            if (this != &rhs)
            {
                _tab = rhs._tab;
            }
            return (*this);
        };

        typedef typename std::vector<T>::iterator iterator;

        iterator begin()
        {
            return _tab.begin();
        }
        iterator end()
        {
            return _tab.end();
        }
        
        void push(T val)
        {
            _tab.push_back(val);
        }
        void pop()
        {
            _tab.pop_back();
        }
        T top()
        {
            return (*(_tab.end() - 1));
        }
        int size()
        {
            return (_tab.size());
        }
        bool empty()
        {
            if (_tab.size() == 0)
                return (true);
            return (false);
        }
        void swap(MutantStack<T> &s)
        {
            int max;
            int diff;
            int i = 0;
            bool me;
            T tmp;

            me = s.size() > this->size() ? 0 : 1;
            max = s.size() > this->size() ? s.size() : this->size();
            diff = abs(s.size() - this->size());

            while(i < max)
            {
                if (i < this->size() && i < s.size())
                {
                    tmp = _tab[i];
                    _tab[i] = s._tab[i];
                    s._tab[i] = tmp;
                }
                else if (i >= this->size() && i < s.size())
                {
                    this->push(s._tab[i]);
                }
                else if (i < this->size() && i >= s.size())
                {
                    s.push(_tab[i]);
                }
                i++;
            }
            
            while (diff > 0)
            {
                if(!me)
                    s.pop();
                else
                    this->pop();
                diff--;
            }
        }
};

#endif