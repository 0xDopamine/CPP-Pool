/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 21:41:37 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/28 23:10:49 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"), brain(new Brain()) {

    std::cout << "A new kitten has been born!" << std::endl;
}

Cat::Cat(const std::string type): Animal(type), brain(new Brain()) {

    std::cout << "A new kitten has been born!" << std::endl;
}

Cat::Cat(const Cat& Meow): Animal(Meow), brain(new Brain()) {

    std::cout << "A new kitten has been born!" << std::endl;
}

Cat::~Cat() {

    std::cout << "The kitten " << getType() << " has just died!" << std::endl;
}

Cat&    Cat::operator=(const Cat& Meow) {
    
    if (this != &Meow)
    {  
        this->type = Meow.type;
        this->brain = Meow.brain;
    }
    return (*this);
}

void    Cat::makeSound() const {

    std::cout << "Meow.." << std::endl;
    delete brain;
}