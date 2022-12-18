/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:12:28 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/18 17:02:25 by mbaioumy         ###   ########.fr       */
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
		Zombie(std::string name);
		~Zombie(void);
		std::string get_name(void);
		void    announce(void);
		
} ;

Zombie *newZombie(std::string name);
void 	randomChump(std::string name);

#endif