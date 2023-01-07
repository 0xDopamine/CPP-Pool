/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 19:37:47 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/07 20:15:01 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	try
	{
		std::vector<int> v;
		std::iterator

		for (int i = 0; i < 10; i++) {
			v.push_back(i);
		}
		std::cout << ::easyfind(v, 0) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
