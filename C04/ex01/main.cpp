/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 22:01:05 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/31 16:37:57 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    Animal *a = new Cat();
    Animal *b = new Dog();
    std::cout << std::endl;
    std::cout << "---BIRTH---" << std::endl;
    std::cout << std::endl;
    Cat cat;
    {
        Cat kitty = cat;
        std::cout << std::endl;
        std::cout << "---TESTS---" << std::endl;
        std::cout << std::endl;
        
        cat.setIdeas("food");
        std::cout << "cat ideas: ";
        std::cout << cat.getIdeas() << std::endl;
        std::cout << "kitty ideas: ";
        std::cout << kitty.getIdeas() << std::endl;
        std::cout << std::endl;
        std::cout << "---DEATH---" << std::endl;
        std::cout << std::endl;
    }
    delete a;
    delete b;
    return (0);
}