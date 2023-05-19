/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:27:41 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/05/19 16:50:03 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {};

PmergeMe::PmergeMe(const PmergeMe& src) {
    *this = src;
};

PmergeMe::~PmergeMe() {};

PmergeMe& PmergeMe::operator=(const PmergeMe& src) {
    
    if (this != &src) {
        this->deq = src.deq;
        this->vec = src.vec;
    }
    return (*this);
}  ;

template <typename T>
void	PmergeMe::print(T& nums) {
	
	for (int i = 0; i < static_cast<int>(nums.size()); i++) {
			std::cout << nums[i] << " ";
	}
} ;

template <typename T, typename B>

void    PmergeMe::insertion_sort(T& nums, B left, B right) {

    for (B i = left + 1; i < right; i++) {
		B key = nums[i];
		B j = i - 1;

		while (j >= left && nums[j] > key) {
			nums[j + 1] = nums[j];
			j--;
		}
		nums[j + 1]  = key;
	}
	// for (int i = 0; i < static_cast<int>(nums.size()); i++)
	// 	std::cout << nums[i] << " ";
} ;

template <typename T, typename B>
void	PmergeMe::merge(T& nums, B left, B mid, B right) {

	T	leftSide(nums.begin() + left, nums.begin() + mid + 1);
	T	rightSide(nums.begin() + mid + 1, nums.begin() + right + 1);
	
	B	i = 0, j = 0, k = left;

	while (i < static_cast<B>(leftSide.size()) && j < static_cast<B>(rightSide.size())) {

		if (leftSide[i] <= rightSide[j])
			nums[k++] = leftSide[i++];
		else
			nums[k++] = rightSide[j++];
	}
	
	while (i < static_cast<B>(leftSide.size()))
		nums[k++] = leftSide[i++];
	
	while (j < static_cast<B>(rightSide.size()))
		nums[k++] = rightSide[j++];
} ;

template <typename T, typename B>
void	PmergeMe::merge_sort(T& vec, B left, B right)
{
	start = clock();
	if (left < right) {

		if (right - left + 1 <= 10)
			insertion_sort(vec, left, right);
		else {
			B mid = left + (right - left) / 2;
			merge_sort(vec, left, mid);
			merge_sort(vec, mid + 1, right);
			merge(vec, left, mid, right);
		}
	}
	end = clock();
} ;

void    PmergeMe::parse(int argc, char **argv)  {

    for (int i = 1; i < argc; i++) {
		int value = std::stoi(argv[i]);
		vec.push_back(value);
	}
	for (int i = 1; i <= argc - 1; i++) {
		int value = std::stoi(argv[i]);
		deq.push_back(value);
	}

	std::cout << "Before: ";
	print(vec);
    std::cout << std::endl;
    merge_sort(vec, 0, static_cast<int>(vec.size()));
    std::cout << "After: ";
    print(vec);
    std::cout << std::endl;
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << (double(end - start)/CLOCKS_PER_SEC) * 100000000 << " us" << std::endl;
    merge_sort(deq, 0, static_cast<int>(deq.size()));
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque : " << ((double)(end - start)/CLOCKS_PER_SEC) * 100000000 << " us" << std::endl;
}