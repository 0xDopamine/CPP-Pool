/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:55:15 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/23 17:28:34 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << Zombie::get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name): name(name) {}

Zombie::~Zombie(void)
{
    std::cout << Zombie::get_name() << ": *DYING NOISES*" << std::endl;
}

std::string Zombie::get_name(void) { return (name); }
