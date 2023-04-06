/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:27:46 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/04/06 21:29:23 by mbaioumy         ###   ########.fr       */
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

void	merge(std::vector<int>& vec, int right, int left, int mid)
{
	int	size1 = mid - left + 1;
	int size2 = right - mid;
	std::vector<int> L(size1), R(size2);

	
}

void	merge_sort(std::vector<int>& vec, int right, int left)
{
	if (left < right) {
		int	mid = (left + right) / 2;
		merge_sort(vec, mid, left);
		merge_sort(vec, right, mid + 1);
		merge(vec, right, left, mid);
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