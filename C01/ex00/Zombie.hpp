/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:12:28 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/11/09 12:12:28 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstring>
#include <iomanip>

class Zombie {
    private:
        std::string name;
    public:
        void    announce(void){
            std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
        };
} ;

Zombie *newZombie(std::string name)
{
    
}

#endif