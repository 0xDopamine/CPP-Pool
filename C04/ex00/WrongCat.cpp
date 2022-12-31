/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 16:22:07 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/31 16:46:42 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("Cat") {

    std::cout << "--WrongCat: " << "A new kitten has been born!" << std::endl;
}

WrongCat::WrongCat(const std::string type): WrongAnimal(type) {

    std::cout << "--WrongCat: " << "A new kitten has been born!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& Meow): WrongAnimal(Meow) {

    std::cout << "--WrongCat: " << "A new kitten has been born!" << std::endl;
}

WrongCat::~WrongCat() {

    std::cout << "--WrongCat: " << "The kitten " << getType() << " has just died!" << std::endl;
}

WrongCat&    WrongCat::operator=(const WrongCat& Meow) {
    
    if (this != &Meow)
        this->type = Meow.type;
    return (*this);
}

void    WrongCat::makeSound() const {

    std::cout << "--WrongCat: " << "Meow.." << std::endl;
}