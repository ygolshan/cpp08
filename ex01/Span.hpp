/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:36:43 by ygolshan          #+#    #+#             */
/*   Updated: 2024/02/18 17:32:56 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <exception>

class Span
{
    private:
        unsigned int size;
        std::vector<int> v;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &obj);
        Span &operator=(const Span &obj);
        ~Span();
        void addNumber(int);
        int shortestSpan();
        int longestSpan();
        template <typename T> void addNumber(T begin , T end)
        {
            for (T tmp = begin; tmp != end; ++tmp)
            {
                v.push_back(*tmp);
            }   
        }
};

#endif