/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:27:39 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/05/18 17:29:50 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

class PmergeMe {
	
	private:
		std::vector<int> vec;
		std::deque<int> deq;
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe& src);
		PmergeMe& operator=(const PmergeMe& src);
		template <typename T>
		void	print(T& nums);
		template <typename T, typename B>
		void    insertion_sort(T& nums, B left, B right);
		template <typename T, typename B>
		void	merge_sort(T& vec, B left, B right);
		template <typename T, typename B>
		void	merge(T& nums, B left, B mid, B right);
		void	parse(int argc, char **argv);
} ;

#endif