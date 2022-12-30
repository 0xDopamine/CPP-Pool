/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 22:01:05 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/30 21:22:34 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    Cat cat;
    Cat kitty = cat;
    Animal meta;
    std::cout << std::endl;
    std::cout << "---TESTS---" << std::endl;
    std::cout << std::endl;
    
    cat.setIdeas("food");
    std::cout << cat.getIdeas() << std::endl;
    std::cout << kitty.getIdeas() << std::endl;
    return (0);
}