/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 21:41:37 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/28 22:07:53 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {

    std::cout << "A new kitten has been born!" << std::endl;
}

Cat::Cat(const std::string type): Animal(type) {

    std::cout << "A new kitten has been born!" << std::endl;
}

Cat::Cat(const Cat& Meow): Animal(Meow) {

    std::cout << "A new kitten has been born!" << std::endl;
}

Cat::~Cat() {

    std::cout << "The kitten " << getType() << " has just died!" << std::endl;
}

Cat&    Cat::operator=(const Cat& Meow) {
    
    if (this != &Meow)
        this->type = Meow.type;
    return (*this);
}

void    Cat::makeSound() const {

    std::cout << "Meow.." << std::endl;
}