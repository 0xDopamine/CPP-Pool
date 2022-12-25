/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:24:58 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/25 21:50:36 by mbaioumy         ###   ########.fr       */
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
		ClapTrap( void );
		ClapTrap(const ClapTrap& clappy);
		ClapTrap(std::string name);
		~ClapTrap(void);
		std::string	getName( void );
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
} ;

#endif