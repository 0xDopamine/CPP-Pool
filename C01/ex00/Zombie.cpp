/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:55:15 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/11/14 15:55:15 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"

void    Zombie::announce(void) {
    std::cout << Zombie::get_name() << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie(void) {
    std::cout << Zombie::get_name() << ": rip\n";
}

std::string Zombie::get_name(void) {
    return (name);
}
