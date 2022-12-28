/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:24:58 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/28 19:44:02 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string 	name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap& Clappy);
		ClapTrap(std::string name);
		~ClapTrap(void);
		std::string	getName( void );
		ClapTrap&	operator=(const ClapTrap& Clappy);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
} ;

#endif