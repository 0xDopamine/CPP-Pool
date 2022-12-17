/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:30:27 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/16 18:42:12 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void) {
    std::cout << Zombie::get_name() << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(void) {
    this->name = "";
}

Zombie::~Zombie(void) {
    std::cout << Zombie::get_name() << ": rip\n";
}

std::string Zombie::get_name(void) {
    return (name);
}

void    Zombie::set_name(std::string newName) {
    this->name = newName;
}