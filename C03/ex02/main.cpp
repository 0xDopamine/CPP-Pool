/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:18:14 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/28 20:15:58 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << std::endl;
    std::cout << "---THE BIRTH---" << std::endl;
	std::cout << std::endl;
	ClapTrap	Ayman("Ayman");
	ClapTrap	Amine("Amine");
	ScavTrap	Saad("Saad");
	ScavTrap	SaadClone = Saad;
	FragTrap	Froggo("Froggo");

	std::cout << std::endl;
    std::cout << "---BATTLEGROUND---" << std::endl;
	std::cout << std::endl;
	Amine.attack("Ayman");
	Ayman.takeDamage(5);
	Ayman.beRepaired(10);
	Saad.attack("Amine");
	SaadClone.attack("Amine");
	Amine.takeDamage(10);
	Ayman.beRepaired(1);
	Saad.guardGate();
	SaadClone.guardGate();
	Froggo.highFivesGuys();
	std::cout << std::endl;
    std::cout << "---DOOMSDAY---" << std::endl;
	std::cout << std::endl;
	return (0);
}