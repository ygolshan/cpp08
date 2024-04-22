/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:36:57 by ygolshan          #+#    #+#             */
/*   Updated: 2024/02/18 17:16:15 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    try {
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        v.push_back(5);

        std::cout << "Vector: ";
        for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;

        int target1 = 3;
        std::cout << "Searching for " << target1 << " in vector... ";
        easyfind(v, target1);

        int target2 = 6;
        std::cout << "Searching for " << target2 << " in vector... ";
        easyfind(v, target2);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::list<int> l;
        l.push_back(6);
        l.push_back(7);
        l.push_back(8);
        l.push_back(9);
        l.push_back(10);

        std::cout << "List: ";
        for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;

        int target3 = 8;
        std::cout << "Searching for " << target3 << " in list... ";
        easyfind(l, target3);

        int target4 = 11; 
        std::cout << "Searching for " << target4 << " in list... ";
        easyfind(l, target4);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::deque<int> d;
        d.push_back(11);
        d.push_back(12);
        d.push_back(13);
        d.push_back(14);
        d.push_back(15);

        std::cout << "Deque: ";
        for (std::deque<int>::iterator it = d.begin(); it != d.end(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;

        int target5 = 13;
        std::cout << "Searching for " << target5 << " in deque... ";
        easyfind(d, target5);

        int target6 = 16;
        std::cout << "Searching for " << target6 << " in deque... ";
        easyfind(d, target6);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}