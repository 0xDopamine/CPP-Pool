/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 21:50:26 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/28 22:07:36 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(const std::string type);
        Dog(const Dog& Woof);
        ~Dog();
        Dog&    operator=(const Dog& Woof);
		virtual void	makeSound() const;
} ;

#endif