/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:36:57 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/10 19:09:39 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {

    private:
        std::vector<int>    v;
        unsigned int        N;
    public:
        Span(unsigned int N);
        Span(const Span& span);
        ~Span();
        Span&       operator=(const Span& span);
        void        addNumber(int num);
        int         getSize();
        void        addRange(int num, std::vector<int>::iterator& start, std::vector<int>::iterator& end);
        int         shortestSpan();
        int         longestSpan();
} ;

#endif