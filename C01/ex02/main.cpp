/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:48:28 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/11/14 18:48:28 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string  var = "Hi THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string **stringREF = &stringPTR;

    std::cout << &var << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    std::cout << var << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << **stringREF << std::endl;
    return (0);
}