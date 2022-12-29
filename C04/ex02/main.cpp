/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 22:01:05 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/29 19:19:08 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    // std::cout << std::endl;
    // std::cout << "---BIRTH---" << std::endl;
    // std::cout << std::endl;

    // const Animal* meow = new Cat();
    // const Animal *scrabbles = new Cat();
    // const Animal *MrShroomp = new Cat();
    // const Animal *max = new Dog();
    // const Animal* woof = new Dog();
    // const Animal* waffle = new Dog();
    // const Animal* Alpha[6] = {max, woof, waffle, MrShroomp, scrabbles, meow};
    Cat cat;
    Cat kitty = cat;

    std::cout << std::endl;
    std::cout << "---TESTS---" << std::endl;
    std::cout << std::endl;
    
    cat.setIdeas("food");
    std::cout << cat.getIdeas() << std::endl;
    std::cout << kitty.getIdeas() << std::endl;
     
    

    // std::cout << std::endl;
    // std::cout << "---DOOM---" << std::endl;
    // std::cout << std::endl;

    // for (int i = 0; i < 6; i++)
    //     delete Alpha[i];
}