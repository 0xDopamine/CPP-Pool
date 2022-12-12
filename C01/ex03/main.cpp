/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:32:57 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/12 17:07:53 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.cpp"
#include "HumanB.cpp"
#include "Weapon.cpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon *club = NULL;
		HumanB jim("Jim");
		jim.setWeapon(*club);
		jim.attack();
		club->setType("some other type of club");
		jim.attack();
	}
	return 0;
}

