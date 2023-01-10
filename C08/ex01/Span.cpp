/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:39:30 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/10 19:35:05 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N): N(N) {
	
};

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

	if (N > v.size())
		v.push_back(num);
	else
		throw std::out_of_range("Out of range");
}

int		Span::shortestSpan() const{

	int	min = INT_MAX;
	std::vector<int> tmp(v);

	if (v.empty())
		throw std::runtime_error("vector is empty");
	std::sort(tmp.begin(), tmp.end());

	for (size_t i = 0; i < tmp.size() - 1; i++) {
		for (size_t j = i + 1; j < tmp.size(); j++) {
			if (std::abs(tmp[i] - tmp[j]) < min)
				min = std::abs(tmp[i] - tmp[j]);
		}
	}
	return (min);
}

long		Span::longestSpan()  const{

	if (v.empty())
		throw std::runtime_error("vector is empty");
	std::vector<int>::const_iterator min = std::min_element(v.begin(), v.end());
	std::vector<int>::const_iterator max = std::max_element(v.begin(), v.end());

	return (static_cast<long>(*max) - static_cast<long>(*min));
}

int			Span::getSize() const{

	return (v.size());
}

void	Span::addRange(int num, std::vector<int>::iterator& start, std::vector<int>::iterator& end) {

	if (N >= std::distance(start, end))
	{
		while (start != end) {
			addNumber(num);
			++start;
		}
	}
	else
		throw std::out_of_range("Out of range");
}
