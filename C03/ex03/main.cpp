/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:18:14 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/27 20:46:11 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScravTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    std::cout << "---THE BIRTH---" << std::endl;
	ClapTrap	Ayman("Ayman");
	ClapTrap	Amine("Amine");
	ScravTrap	Scravy("Scravy");
	FragTrap	Frogo("Froggo");
	FragTrap	Fragster(Frogo);
	ClapTrap	NPC;
	DiamondTrap	Diamond("DiamondHead");

	std::cout << "---BATTLEGROUND---" << std::endl;
	Amine.attack("Ayman");
	Scravy.attack("Amine");
	Scravy.guardGate();
	Ayman.takeDamage(5);
	Ayman.attack("Amine");
	Amine.takeDamage(5);
	Ayman.attack("Amine");
	NPC.attack("Ayman");
	Ayman.takeDamage(10);
	Amine.takeDamage(10);
	Amine.beRepaired(20);
	std::cout << "---FUN STUFF---" << std::endl;
	Frogo.highFivesGuys();
	Diamond.whoAmI();
	std::cout << "---DOOMSDAY---" << std::endl;
	return (0);
}