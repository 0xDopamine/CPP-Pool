/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:29:34 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/11 21:32:40 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), arm(NULL) {}

HumanB::~HumanB(void) {}

void    HumanB::attack(void) {
    if (!arm)
        std::cout << name + " doesn't have a weapon" << std::endl;        
    else
        std::cout << name << " attacks with their " << arm->getType() << std::endl;
}

Weapon& HumanB::getWeapon(void) {
    return(*(arm));
}

void    HumanB::setWeapon(Weapon& newWeapon) {
    arm = &newWeapon;
}
