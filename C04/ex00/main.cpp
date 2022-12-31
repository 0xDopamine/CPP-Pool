/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 22:01:05 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/31 17:29:44 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << "---BIRTH---" << std::endl;
    std::cout << std::endl;
    const Animal* meta = new Animal();
    const Animal* meow = new Cat();
    const Animal* woof = new Dog();
    const WrongAnimal* badCat = new WrongCat();

    std::cout << std::endl;
    std::cout << "---TYPE---" << std::endl;
    std::cout << std::endl;
    std::cout << "Meow type: " << meow->getType() << " " << std::endl;
    std::cout << "Woof type: " << woof->getType() << " " << std::endl;
    
    std::cout << std::endl;
    std::cout << "---SOUNDS---" << std::endl;
    std::cout << std::endl;
    std::cout << "cat: ";
    meow->makeSound();
    std::cout << "dog: ";
    woof->makeSound();
    std::cout << "meta: ";
    meta->makeSound();
    std::cout << "wrong cat: ";
    badCat->makeSound();
    std::cout << std::endl;
    std::cout << "---DEATH---" << std::endl;
    std::cout << std::endl;
    delete meta;
    delete meow;
    delete woof;
    delete badCat;
}