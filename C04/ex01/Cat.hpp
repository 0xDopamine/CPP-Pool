/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 21:38:11 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/31 17:33:07 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain*	brain;
	public:
		Cat();
		Cat(const std::string type);
		Cat(const Cat& Meow);
		~Cat();
		Cat&	operator=(const Cat& Meow);
		virtual void	makeSound() const;
        void    setIdeas(std::string idea);
		std::string	getIdeas(void);
} ;

#endif