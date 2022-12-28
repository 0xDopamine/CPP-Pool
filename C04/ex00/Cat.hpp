/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 21:38:11 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/28 22:07:46 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(const std::string type);
		Cat(const Cat& Meow);
		~Cat();
		Cat&	operator=(const Cat& Meow);
		virtual void	makeSound() const;
} ;

#endif