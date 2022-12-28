/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:30:54 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/28 19:37:40 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
	std::cout << "--ClapTrap: " << "The almighty " << name << " has been born." << std::endl; 
};

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "--ClapTrap: " << "The almighty " << name << " has been born." << std::endl; 
};

ClapTrap::~ClapTrap( void ) {
	std::cout << "--ClapTrap: " << "Rest in peace " << getName() << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap& clappy): name(clappy.name), hitPoints(clappy.hitPoints), energyPoints(clappy.energyPoints), attackDamage(clappy.attackDamage) {
	std::cout << "--ClapTrap: " << "The almighty " << name << " has been born." << std::endl; 
};


std::string ClapTrap::getName( void ) { return (name); } ;

ClapTrap&	ClapTrap::operator=(const ClapTrap& Clappy)
{
	if (this != &Clappy)
	{
		this->name = Clappy.name;
		this->hitPoints = Clappy.hitPoints;
		this->energyPoints = Clappy.energyPoints;
		this->attackDamage = Clappy.attackDamage;
	}
	return (*this);
} ;

void    ClapTrap::attack(const std::string& target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		std::cout << "--ClapTrap: " << getName() << " attacks " << target<< ", causing " << attackDamage << " points of damage!" << std::endl;;
		energyPoints--;
	}
	else
		std::cout << "--ClapTrap: " << getName() << ": Not enough energy points!" << std::endl;
} ;

void    ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints - amount > 0)
	{
		hitPoints -= amount;
		std::cout << "--ClapTrap: " << getName() << " has taken " << amount << " in damage" << std::endl;
	}
	else if (hitPoints - amount <= 0)
		std::cout << "--ClapTrap: " << getName() << " is dead." << std::endl;
} ;

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints > 0 && hitPoints < 10)
	{
		std::cout << "--ClapTrap: " << getName() << " has repaired: " << amount << " life points!" << std::endl;
		if (hitPoints + amount >= 10)
			hitPoints = 10;
		else
			hitPoints += amount;
			
	}
	else
		std::cout << "--ClapTrap: " << getName() << ": Not enough energy points!" << std::endl;
	std::cout << "--ClapTrap: " << getName() << " Health Bar: " << hitPoints << std::endl;

} ;