/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:33:58 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/10 19:08:42 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void    rangeTest() {

    Span sp = Span(100);
    std::vector<int> noobnoob(100);
    std::vector<int>::iterator start = noobnoob.begin();
    std::vector<int>::iterator finish = noobnoob.end();

    sp.addRange(1337, start, finish);
    std::cout << "size: " << sp.getSize() << std::endl;
}

void    normalTest() {

    Span sp = Span(5);
    
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

int main()
{
    normalTest();
    rangeTest();
    return 0;
}