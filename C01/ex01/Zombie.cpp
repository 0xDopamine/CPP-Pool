/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:30:27 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/18 18:22:19 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void) {
    std::cout << Zombie::get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void) {
    this->name = "";
}

Zombie::~Zombie(void) {
    std::cout << Zombie::get_name() << ": *DYING NOISES*" << std::endl;
}

std::string Zombie::get_name(void) {
    return (name);
}

void    Zombie::set_name(std::string newName) {
    this->name = newName;
}