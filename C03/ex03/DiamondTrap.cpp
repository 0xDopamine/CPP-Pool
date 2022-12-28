/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 19:25:25 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/28 20:27:43 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): name("Diamzer") {
    std::cout << "--DiamondTrap: " << "default DiamondTrap " << getName() << " was born!" << std::endl;
};

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name") {
    std::cout << "--DiamondTrap: " <<  "DiamondTrap " << getName() << " was born!" << std::endl;
};

DiamondTrap::DiamondTrap(const DiamondTrap& Diamzer): ClapTrap(Diamzer) {
    std::cout << "--DiamondTrap: " << "Copy DiamondTrap " << getName() << " was born!" << std::endl;
};

DiamondTrap::~DiamondTrap() {
    std::cout << "--DiamondTrap: " <<  "Who would've thought.. Diamonds do break " << getName() << " just died!" << std::endl;
};

DiamondTrap&    DiamondTrap::operator=(const DiamondTrap& Diamzer)
{
    if (this != &Diamzer)
    {
        this->name = Diamzer.name;
        this->hitPoints = Diamzer.hitPoints;
        this->energyPoints = Diamzer.energyPoints;
        this->attackDamage = Diamzer.attackDamage;
    }
    return (*this);
}

void    DiamondTrap::whoAmI( void )
{
    std::cout << "--DiamondTrap: " <<  "Hereby I announce, it is I the undestructable DiamondTrap " << getName() << "!" << std::endl;
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}
