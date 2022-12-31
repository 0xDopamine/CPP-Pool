/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 21:29:07 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/31 16:41:14 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Beast") {
	std::cout << "--Animal: " << "A new beast have been created!" << std::endl;
}

Animal::Animal(const std::string type): type(type) {

	std::cout << "--Animal: " << "A new beast have been created!" << std::endl;
}

Animal::Animal(const Animal& Beast): type(Beast.type) {
	
	std::cout << "--Animal: " << "A new beast have been created!" << std::endl;
}

Animal::~Animal() {

	std::cout << "--Animal: " << "The beast " << getType() << " has just died!" << std::endl;
}

std::string	Animal::getType() const {

	return (type);
}

Animal&	Animal::operator=(const Animal& Beast) {
	
	if (this != &Beast)
		this->type = Beast.type;
	return (*this);
}

void	Animal::makeSound() const {

	std::cout << "--Animal: " << "*UNKNOWN ANIMAL NOISES*" << std::endl;
}
