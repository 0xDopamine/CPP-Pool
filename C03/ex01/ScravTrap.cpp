/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:19:27 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/25 21:55:44 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"


ScravTrap::ScravTrap(std::string name): ClapTrap(name) {} ;

ScravTrap::ScravTrap(const ScravTrap& Scravster): ClapTrap(Scravster) {};

ScravTrap::~ScravTrap( void ) {} ;

void    ScravTrap::attack(const std::string& target)
{
    std::cout << "ScravTrap " << getName() << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
} ;

void    ScravTrap::guardGate()
{
    std::cout << this->name << " is guarding the gate!" << std::endl;
} ;
