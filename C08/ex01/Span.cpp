/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:39:30 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/08 19:39:40 by mbaioumy         ###   ########.fr       */
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

		span.v.assign(this->v.begin(), this->v.end());
		
	}
	
}

void	Span::addNumber(int num) {

	
}

int		Span::shortestSpan() {

	
}

int		Span::longestSpan() {

	
}