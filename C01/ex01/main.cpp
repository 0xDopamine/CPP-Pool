/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:38:38 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/11/14 18:38:38 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Zombie.hpp"
#include "ZombieHorde.cpp"
#include "Zombie.cpp"

int main(void) 
{
    Zombie  *horde = zombieHorde(5, "hiba");
    delete [] horde;
    return (0);
}