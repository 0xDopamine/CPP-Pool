/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 19:25:25 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/27 20:33:44 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): name("Diamzer") { std::cout << "default DiamondTrap " << getName() << " was born!" << std::endl; };

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name") { std::cout << "DiamondTrap " << getName() << " was born!" << std::endl; };

DiamondTrap::DiamondTrap(const DiamondTrap& Diamzer): ClapTrap(Diamzer) { std::cout << "Copy DiamondTrap " << getName() << " was born!" << std::endl;};

DiamondTrap::~DiamondTrap() { std::cout << "Who would've thought.. Diamonds do break " << getName() << " just died!" << std::endl; };

void    DiamondTrap::whoAmI( void )
{
    std::cout << "Hereby I announce, it is I the undestructable DiamondTrap " << getName() << "!" << std::endl;
}
