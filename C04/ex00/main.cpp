/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 22:01:05 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/28 22:09:41 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* meow = new Cat();
    const Animal* woof = new Dog();

    std::cout << "Meow type: " << meow->getType() << " " << std::endl;
    std::cout << "Woof type: " << woof->getType() << " " << std::endl;
    std::cout << "cat: ";
    meow->makeSound();
    std::cout << "dog: ";
    woof->makeSound();
    std::cout << "beast: ";
    meta->makeSound();
}