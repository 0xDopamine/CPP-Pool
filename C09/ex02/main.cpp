/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:27:46 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/04/07 20:26:57 by mbaioumy         ###   ########.fr       */
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
	
	for (int i = 0; i < size1; i++) {
		L[i] = vec[left + i];
	}	
	for (int j = 0; j < size2; j++) {
		R[j] = vec[mid + 1 + j];
	}
	insertion(L);
	insertion(R);
	
	for (std::vector<int>::iterator it = L.begin(); it < L.end(); it++)
		std::cout << "L:" << *it << std::endl;
	for (std::vector<int>::iterator it = R.begin(); it < R.end(); it++)
		std::cout << "R:" << *it << std::endl;
}
	// int	i = 0, j = 0, index = left;
	
	

void	merge_sort(std::vector<int>& vec, int left, int right)
{
	if (left < right) {
		std::cout << "hello" << std::endl;
		int	mid = (left + right) / 2;
		merge_sort(vec, mid, left);
		merge_sort(vec, right, mid + 1);
		merge(vec, right, left, mid);
	}
	return ;
}

int main(int argc, char **argv) {

	std::vector<int>	vec;
	
	for (int i = 1; i < argc; i++)
		vec.push_back(std::atoi(argv[i]));
	// insertion(vec);
	merge_sort(vec,  0, vec.size() - 1);
	for (std::vector<int>::iterator it = vec.begin(); it < vec.end(); it++)
		std::cout << *it << std::endl;
}