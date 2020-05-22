/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereynier <ereynier@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 16:35:56 by ereynier          #+#    #+#             */
/*   Updated: 2020/05/22 17:47:56 by ereynier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int _n;
        std::vector<int> _tab;
        Span();

    public:

        class notEnoughNumber : public std::exception
        {
            public:
                const char *what() const throw();
        };
        class tooMuchNumber : public std::exception
        {
            public:
                const char *what() const throw();
        };
        
        
        Span(unsigned int N);
        Span(const Span &src);
        ~Span();

        Span &operator=(const Span &rhs);

        void addNumber(int i);
        unsigned int shortestSpan();
        unsigned int longestSpan();
};

#endif