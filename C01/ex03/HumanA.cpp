/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:16:13 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/11/14 20:16:13 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), arm(weapon) {}

HumanA::~HumanA (void) {}

void    HumanA::attack(void) {
    std::cout << this->name << " attacks with their " << this->arm.getType() + "\n";
}

Weapon  &HumanA::getWeapon(void) {
    return (this->arm);
}