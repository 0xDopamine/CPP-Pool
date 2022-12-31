/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 21:29:05 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/31 16:01:02 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const std::string type);
		Animal(const Animal& Beast);
		virtual ~Animal();
		std::string	getType() const;
		Animal&	operator=(const Animal& Beast);
		virtual void	makeSound() const;
} ;

#endif