/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 16:30:54 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/24 19:56:17 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name) {
    std::cout << "The almighty " << name << " has been born." << std::endl; 
};

ClapTrap::~ClapTrap( void ) {
    std::cout << "Rest in peace" << this->getName() << std::endl;
};

void    ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << this->getName() << " attacks" << target << ", causing";
} ;

void    ClapTrap::takeDamage(unsigned int amount)
{
    
} ;

void    ClapTrap::beRepaired(unsigned int amount)
{
    
} ;