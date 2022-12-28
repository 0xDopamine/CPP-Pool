/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 21:51:49 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/28 23:10:53 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Doggo"), brain(new Brain()) {

    std::cout << "A new pup just came to the world!" << std::endl;
}

Dog::Dog(const std::string type): Animal(type), brain(new Brain()) {

    std::cout << "A new pup just came to the world!" << std::endl;
    
}

Dog::Dog(const Dog& Woof): Animal(Woof), brain(new Brain()) {

    std::cout << "A new pup just came to the world!" << std::endl;
}

Dog::~Dog() {

    std::cout << "Puppy just died :(!" << std::endl;
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

    std::cout << "Woof!" << std::endl;
    delete brain;
}