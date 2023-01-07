/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:15:32 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/07 19:56:43 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <vector>

class	NotFoundException: public std::exception {

	public:
		const char * what() const throw() {

			return ("Wanted value not found!");
		}
} ;

template<typename T>

int easyfind(T& haystack, int needle) {
	
	for (int i = 0; haystack[i]; i++)
		if (haystack[i] == needle)
			return (i);
	throw NotFoundException();
	return (-1);
} ;

#endif