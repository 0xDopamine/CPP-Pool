/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:27:46 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/04/05 21:05:21 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	insertion(std::vector<int>& vec)
{
	for (unsigned long i = 1; i < vec.size(); i++)
	{
		int	key = vec[i];
		int	j = i - 1;

		while (j >= 0 && vec[j] > key)
		{
			vec[j + 1] = vec[j];
			j--;
		}
		vec[j + 1] = key;
	}
}

int main(int argc, char **argv) {

	std::vector<int>	vec;
	
	for (int i = 1; i < argc; i++)
		vec.push_back(std::atoi(argv[i]));
	insertion(vec);
	for (std::vector<int>::iterator it = vec.begin(); it < vec.end(); it++)
		std::cout << *it << std::endl;
}