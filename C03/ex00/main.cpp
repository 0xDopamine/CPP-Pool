/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:18:14 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/27 22:26:47 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << std::endl;
    std::cout << "---THE BIRTH---" << std::endl;
	std::cout << std::endl;
	ClapTrap	Ayman("Ayman");
	ClapTrap	Amine("Amine");

	std::cout << std::endl;
    std::cout << "---BATTLEGROUND---" << std::endl;
	std::cout << std::endl;
	Amine.attack("Ayman");
	Ayman.takeDamage(5);
	Ayman.attack("Amine");
	Amine.takeDamage(5);
	Ayman.attack("Amine");
	Amine.takeDamage(10);
	Amine.beRepaired(20);
	std::cout << std::endl;
    std::cout << "---DOOMSDAY---" << std::endl;
	std::cout << std::endl;
	return (0);
}