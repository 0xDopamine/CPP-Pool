/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:33:58 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/10 19:41:27 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void    rangeTest() {

    Span sp = Span(100);
    std::vector<int> noobnoob(100);
    std::vector<int>::iterator start = noobnoob.begin();
    std::vector<int>::iterator finish = noobnoob.end();

    sp.addRange(1337, start, finish);
    // sp.addNumber(13);
    std::cout << "size: " << sp.getSize() << std::endl;
    
    
    std::vector<int> vect2(100);
    std::vector<int>::iterator start2 = vect2.begin();
    std::vector<int>::iterator finish2 = vect2.end();

    sp.addRange(2001, start2, finish2);
}

void    normalTest() {

    Span sp = Span(5);
    
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    // sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

int main()
{
    try {
        normalTest();
        // rangeTest();   
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}