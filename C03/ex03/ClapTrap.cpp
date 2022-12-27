/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:30:54 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/25 21:52:03 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {};

ClapTrap::ClapTrap(const ClapTrap& clappy): name(clappy.name), hitPoints(clappy.hitPoints), energyPoints(clappy.energyPoints), attackDamage(clappy.attackDamage) {};

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(100), energyPoints(50), attackDamage(20) {
	std::cout << "The almighty " << name << " has been born." << std::endl; 
};

ClapTrap::~ClapTrap( void ) {
	std::cout << "Rest in peace " << getName() << std::endl;
};

std::string ClapTrap::getName( void ) { return (name); } ;

void    ClapTrap::attack(const std::string& target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		std::cout << "ClapTrap " << getName() << " attacks " << target<< ", causing " << attackDamage << " points of damage!" << std::endl;;
		energyPoints--;
	}
	else
		std::cout << "ClapTrap" << getName() << ": Not enough energy points!" << std::endl;
} ;

void    ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints >= amount)
	{
		hitPoints -= amount;
		std::cout << getName() << " has taken " << amount << " in damage" << std::endl;
	}
	if (hitPoints == 0)
		std::cout << getName() << " is dead." << std::endl;
} ;

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints >= 0 && hitPoints <= 10)
	{
		std::cout << getName() << " has repaired: " << amount << std::endl;
		if (hitPoints + amount >= 10)
			hitPoints = 10;
		else
			hitPoints += amount;
			
	}
	else
		std::cout << "ClapTrap" << getName() << ": Not enough energy points!" << std::endl;
} ;