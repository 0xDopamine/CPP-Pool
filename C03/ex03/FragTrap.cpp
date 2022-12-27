/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 21:58:58 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/27 22:10:58 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap( void ): ClapTrap("Fragginton") 
{
    std::cout << "--FragTrap: " << "An NPC FragTrap Fragginton was born" << std::endl;
};

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "--FragTrap: " << "The undeniyably awesome FragStrap " << getName() << " was born" << std::endl;
};

FragTrap::FragTrap(const FragTrap& Fragginton): ClapTrap(Fragginton) { std::cout << "--FragTrap: " << "The undeniyably awesome FragStrap " << getName() << " was born" << std::endl; };

FragTrap::~FragTrap()
{
    std::cout << "--FragTrap: " << getName() << " died a funny death" << std::endl;
};

void    FragTrap::highFivesGuys( void )
{
    std::cout << "--FragTrap: " << getName() << "is so happy he's highfiving everyone! (But we dunno why tbh)" << std::endl;
};

