/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 18:15:32 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/10 19:15:47 by mbaioumy         ###   ########.fr       */
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

int easyfind(const T& haystack, int needle) {
	
	typename T::const_iterator it = std::find(haystack.begin(), haystack.end(), needle);
	if (it != haystack.end())
		return (std::distance(haystack.begin(), it));
	throw NotFoundException();
	return (-1);
} ;

#endif