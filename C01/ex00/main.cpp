/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:06:53 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/11 17:56:21 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie ayman("Ayman");
    ayman.announce();

    Zombie *hiba = newZombie("Hiba");
    hiba->announce();
    delete(hiba);
    randomChump("Amine");
    return (0);
}

