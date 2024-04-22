/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:34:04 by ygolshan          #+#    #+#             */
/*   Updated: 2024/02/20 09:35:09 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator itA = mstack.begin();
    MutantStack<int>::iterator itB = mstack.end();
    ++itA;
    --itA;
    while (itA != itB)
    {
    std::cout << *itA << std::endl;
    ++itA;
    }
    std::stack<int> s(mstack);
    return 0;
}