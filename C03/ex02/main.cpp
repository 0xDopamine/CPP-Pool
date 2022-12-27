/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 17:18:14 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/27 22:12:35 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap	Ayman("Ayman");
	ClapTrap	Amine("Amine");
	ScavTrap	Scravy("Scravy");

	Amine.attack("Ayman");
	Scravy.attack("Amine");
	Scravy.guardGate();
	Ayman.takeDamage(5);
	Ayman.attack("Amine");
	Amine.takeDamage(5);
	Ayman.attack("Amine");
	Amine.takeDamage(10);
	Amine.beRepaired(20);
	return (0);
}