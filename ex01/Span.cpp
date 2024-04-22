/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:36:49 by ygolshan          #+#    #+#             */
/*   Updated: 2024/02/18 17:32:56 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : size(0) {}

Span::Span(unsigned int n) : size(n) {}

Span::~Span() {}

Span& Span::operator=(const Span &other) {
    if (this != &other) {
        v = other.v;
        size = other.size;
    }
    return *this;
}

void Span::addNumber(int element) {
    if (size <= v.size())
        throw std::out_of_range("Out of range");
    v.push_back(element);
}

int Span::shortestSpan() {
    if (size == 0 || v.size() == 0)
        throw std::runtime_error("Container is empty, cannot find the value");
    std::sort(v.begin(), v.end());
    int shortest = v[1] - v[0];
    for (size_t i = 2; i < v.size(); ++i) {
        int diff = v[i] - v[i - 1];
        if (diff < shortest)
            shortest = diff;
    }
    return shortest;
}

int Span::longestSpan() {
    if (size == 0 || v.size() == 0)
        throw std::runtime_error("Container is empty, cannot find the value");
    std::sort(v.begin(), v.end());
    return v.back() - v.front();
}