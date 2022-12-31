/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 21:41:37 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/31 16:42:17 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat"), brain(new Brain()) {

    std::cout << "--Cat: " << "A new kitten has been born!" << std::endl;
}

Cat::Cat(const std::string type): Animal(type), brain(new Brain()) {

    std::cout << "--Cat: " << "A new kitten has been born!" << std::endl;
}

Cat::Cat(const Cat& Meow) : brain(NULL) {

    std::cout << "--Cat: " << "A new kitten has been born!" << std::endl;
    *this = Meow;
}

Cat::~Cat() {

    std::cout << "--Cat: " << "The kitten " << getType() << " has just died!" << std::endl;
    delete brain;
}

Cat&    Cat::operator=(const Cat& Meow) {
    
    if (this != &Meow)
    {
        delete brain;
        brain = new Brain(*(Meow.brain));
        this->type = Meow.type;
    }
    return (*this);
}

void    Cat::makeSound() const {

    std::cout << "--Cat: " << "Meow.." << std::endl;
}

void    Cat::setIdeas(std::string idea)
{
        brain->setter(idea);
}

std::string Cat::getIdeas(void) {

    return (brain->getter());    
}