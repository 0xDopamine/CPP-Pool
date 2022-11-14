/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:14:42 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/11/14 18:14:42 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "include/Zombie.hpp"

void    randomChump(std::string name) {
    Zombie randomChump = Zombie(name);

    randomChump.announce();
}