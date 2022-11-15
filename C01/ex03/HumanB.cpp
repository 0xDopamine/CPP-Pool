/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:29:34 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/11/14 20:29:34 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), arm(nullptr) {}

HumanB::~HumanB(void) {}

void    HumanB::attack(void) {
    std::cout << this->name << " attacks with their " << this->arm->getType() + "\n";
}

Weapon& HumanB::getWeapon(void) {
    return(*(this->arm));
}

void    HumanB::setWeapon(Weapon& newWeapon) {
    this->arm = &newWeapon;
}
