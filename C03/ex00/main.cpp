/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:18:14 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/28 19:35:51 by mbaioumy         ###   ########.fr       */
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
	Ayman.beRepaired(10);
	std::cout << std::endl;
    std::cout << "---DOOMSDAY---" << std::endl;
	std::cout << std::endl;
	return (0);
}