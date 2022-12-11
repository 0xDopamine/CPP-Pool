/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:14:11 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/11 21:39:15 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type) {};

Weapon::~Weapon(void) {};

const std::string& Weapon::getType(void) { return (type); };

void    Weapon::setType(std::string newType) { 
    if (this)
        this->type = newType; 
    };
