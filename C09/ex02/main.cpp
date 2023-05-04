/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:27:46 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/05/04 18:34:05 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	insertion_sort(std::vector<int>& vec, int left, int right)
{
	for (int i = left + 1; i <= right; i++) {
        int key = vec[i];
        int j = i - 1;
        
        while (j >= left && vec[j] > key) {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = key;
    }
}

void	merge(std::vector<int>& v, int left, int mid, int right)
{
	std::vector<int> leftSide(v.begin() + left, v.begin() + mid + 1);
	std::vector<int> rightSide(v.begin() + mid + 1, v.begin() + right + 1);

    int i = 0, j = 0, k = left;

    while (i < static_cast<int>(leftSide.size()) && j < static_cast<int>(rightSide.size())) {
        if (leftSide[i] <= rightSide[j])
            v[k++] = leftSide[i++];
        else
            v[k++] = rightSide[j++];
    }

    while (i < static_cast<int>(leftSide.size())) 
        v[k++] = leftSide[i++];

    while (j < static_cast<int>(rightSide.size())) 
        v[k++] = rightSide[j++];

}

void	merge_sort(std::vector<int>& vec, int left, int right)
{
	if (left < right) {

        if (right - left + 1 <= 10)
            insertion_sort(vec, left, right);
        else {
            int mid = left + (right - left) / 2;
            merge_sort(vec, left, mid);
            merge_sort(vec, mid + 1, right);
            merge(vec, left, mid, right);
        }
    }
}

int main(int argc, char **argv) {

	std::vector<int> vec;

    for (int i = 1; i < argc; i++) {
        int value = std::stoi(argv[i]);
        vec.push_back(value);
    }
    merge_sort(vec, 0, vec.size() - 1);
    
     for (int i = 0; i < static_cast<int>(vec.size()); i++) {
        std::cout << vec[i] << " ";
    }
}
