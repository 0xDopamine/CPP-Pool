/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 21:51:49 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/31 16:42:50 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Doggo"), brain(new Brain()) {

    std::cout << "--Dog: " << "A new pup just came to the world!" << std::endl;
}

Dog::Dog(const std::string type): Animal(type), brain(new Brain()) {

    std::cout << "--Dog: " << "A new pup just came to the world!" << std::endl;
    
}

Dog::Dog(const Dog& Woof): brain(NULL) {

    std::cout << "--Dog: " << "A new pup just came to the world!" << std::endl;
    *this = Woof;
}

Dog::~Dog() {

    std::cout << "--Dog: " << "Puppy just died :(!" << std::endl;
    delete brain;
}

Dog&    Dog::operator=(const Dog& Woof) {

    if (this != &Woof)
    {
        this->type = Woof.type;
        this->brain = Woof.brain;
    }
    return (*this);
}

void    Dog::makeSound() const {

    std::cout << "--Dog: " << "Woof!" << std::endl;
}