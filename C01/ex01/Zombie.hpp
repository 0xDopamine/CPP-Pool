/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:12:28 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/16 18:44:29 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstring>
#include <iomanip>

class Zombie {
    public:
        void    announce(void);
        Zombie(void);
        ~Zombie(void);
        std::string get_name(void);
        void    set_name(std::string newName);
    private:
        std::string name;
} ;

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif