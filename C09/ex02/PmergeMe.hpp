/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:27:39 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/05/20 16:31:08 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>

enum {

	ERROR,
	OK
} ;

class PmergeMe {
	
	private:
		std::vector<int> vec;
		std::deque<int> deq;
		clock_t	start;
		clock_t end;
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe& src);
		PmergeMe& operator=(const PmergeMe& src);
		int		check_doubles(std::vector<int> vec, int value);
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