/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:24:58 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/24 16:57:07 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string 	name;
		unsigned int	hitPoints = 10;
		unsigned int	energyPoints = 10;
		unsigned int	attackDamage = 0;
	public:
		ClapTrap(std::string name);
		~ClapTrap(void);
		std::string	getName( void );
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
} ;

#endif