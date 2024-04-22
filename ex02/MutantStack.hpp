/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:34:15 by ygolshan          #+#    #+#             */
/*   Updated: 2024/02/19 15:47:30 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <deque>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() {};
        MutantStack(const MutantStack& copy) {std::stack<T>::operator=(copy);};
        MutantStack& operator=(const MutantStack& y) {std::stack<T>::operator=(y); return (*this);};
        virtual ~MutantStack() {};

        typedef typename std::deque<T>::iterator iterator;
        typedef typename std::deque<T>::reverse_iterator reverse_iterator;
		
        iterator begin() {return (std::stack<T>::c.begin());};
        iterator end() {return (std::stack<T>::c.end());};

        reverse_iterator rbegin() {return (std::stack<T>::c.rbegin());};
        reverse_iterator rend() {return (std::stack<T>::c.rend());};
};
    
#endif