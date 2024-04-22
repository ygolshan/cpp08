/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:37:03 by ygolshan          #+#    #+#             */
/*   Updated: 2024/02/18 17:32:02 by ygolshan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <exception> 
# include <algorithm>
# include <list>
# include <deque>
# include <vector>

class bad_exception : public std::exception
{
    public:
        virtual const char* what() const throw() {
            return ("not found");
        }
};

template <typename T>
void    easyfind(T& container, int second)
{
   if (std::find(container.begin(), container.end(), second) != container.end())
		std::cout << "found" << std::endl;
	else
    	throw bad_exception();
}

#endif