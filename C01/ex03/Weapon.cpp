/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:14:11 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/11/14 20:14:11 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
    Weapon::type = type;
}

Weapon::~Weapon(void) {}

std::string Weapon::getType(void) {
    return (this->type);
}

void    Weapon::setType(std::string newType) {
    this->type = newType;
}