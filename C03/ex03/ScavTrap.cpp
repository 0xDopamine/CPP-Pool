/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:19:27 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/27 22:07:32 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Scravvy") { 

    std::cout << "--ScavTrap: " <<  "Default ScavTrap has been born" << std::endl;
} ;

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "--ScavTrap: " <<  getName() << " has been born" << std::endl;
} ;

ScavTrap::ScavTrap(const ScavTrap& Scravster): ClapTrap(Scravster)
{
    std::cout << "--ScavTrap: " <<  getName() << " has been born" << std::endl;
};

ScavTrap::~ScavTrap( void ) {
    std::cout << "--ScavTrap: " <<  getName() << " has died" << std::endl;
} ;

void    ScavTrap::attack(const std::string& target)
{
    std::cout << "--ScavTrap: " << getName() << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
} ;

void    ScavTrap::guardGate()
{
    std::cout << "--ScavTrap: " << name << " is guarding the gate!" << std::endl;
} ;
