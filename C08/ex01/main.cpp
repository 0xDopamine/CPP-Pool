/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:33:58 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/09 18:38:16 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


// int main() {

//     Span sp(5);

//     sp.addNumber(2);
//     sp.addNumber(5);
//     sp.addNumber(0);
//     sp.addNumber(8);
//     sp.addNumber(10);

//     std::cout << sp.longestSpan() << std::endl;
//     std::cout << sp.shortestSpan() << std::endl;

//     return (0);
// }

int main()
{
    Span sp = Span(5);
    
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    return 0;
}