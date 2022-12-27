/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:19:27 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/27 20:45:39 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

ScravTrap::ScravTrap(): ClapTrap("Scravvy") { 

    std::cout << "Default Scravtrap has been born" << std::endl;
} ;

ScravTrap::ScravTrap(std::string name): ClapTrap(name)
{
    std::cout << "Scravtrap " <<  getName() << " has been born" << std::endl;
} ;

ScravTrap::ScravTrap(const ScravTrap& Scravster): ClapTrap(Scravster)
{
    std::cout << "Copy Scravtrap " <<  getName() << " has been born" << std::endl;
};

ScravTrap::~ScravTrap( void ) {
    std::cout << "Scravtrap " <<  getName() << " has died" << std::endl;
} ;

void    ScravTrap::attack(const std::string& target)
{
    std::cout << "ScravTrap " << getName() << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
} ;

void    ScravTrap::guardGate()
{
    std::cout << this->name << " is guarding the gate!" << std::endl;
} ;
