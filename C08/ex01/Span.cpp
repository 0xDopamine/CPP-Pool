/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:39:30 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/09 18:37:48 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N): N(N) {};

Span::Span(const Span& span) {

	*this = span;
}

Span::~Span() {

}

Span&	Span::operator=(const Span& span) {
	
	if (this != &span) {
		N = span.N;
		v = span.v;
	}
	return (*this);
}

void	Span::addNumber(int num) {

	v.push_back(num);
}

int		Span::shortestSpan() {

	int	min = INT_MAX;
	std::sort(v.begin(), v.end());
	for (int i = 0; i < (int)v.size() - 1; i++) {
		for (int j = i + 1; j < (int)v.size(); j++) {
			if (std::abs(v[i] - v[j]) < min)
				min = std::abs(v[i] - v[j]);
		}
	}
	return (min);
}

int		Span::longestSpan() {

	std::vector<int>::iterator min = std::min_element(v.begin(), v.end()) ;
	std::vector<int>::iterator max = std::max_element(v.begin(), v.end());

	return (*max - *min);
}