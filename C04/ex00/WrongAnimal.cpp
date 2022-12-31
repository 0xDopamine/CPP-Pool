/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 16:17:37 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/31 16:46:13 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("Beast") {
	std::cout << "--WrongAnimal: " << "A new Wrong beast have been created!" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type): type(type) {

	std::cout << "--WrongAnimal: " << "A new beast have been created!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& Beast): type(Beast.type) {
	
	std::cout << "--WrongAnimal: " << "A new beast have been created!" << std::endl;
}

WrongAnimal::~WrongAnimal() {

	std::cout << "--WrongAnimal: " << "The beast " << getType() << " has just died!" << std::endl;
}

std::string	WrongAnimal::getType() const {

	return (type);
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& Beast) {
	
	if (this != &Beast)
		this->type = Beast.type;
	return (*this);
}

void	WrongAnimal::makeSound() const {

	std::cout << "--WrongAnimal: " << "*UNKNOWN ANIMAL NOISES*" << std::endl;
}
