/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:19:27 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/25 21:55:44 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name): ClapTrap(name) {} ;

ScavTrap::ScavTrap(const ScavTrap& Scravster): ClapTrap(Scravster) {};

ScavTrap::~ScavTrap( void ) {} ;

void    ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
} ;

void    ScavTrap::guardGate()
{
    std::cout << this->name << " is guarding the gate!" << std::endl;
} ;
