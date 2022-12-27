/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:19:29 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/27 20:34:03 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
#define SCRAVTRAP_HPP



#include "ClapTrap.hpp"

class ScravTrap : virtual public ClapTrap
{
	public:
		ScravTrap();
		ScravTrap(std::string name);
		ScravTrap(const ScravTrap& Scravster);
		~ScravTrap( void );
		void	attack(const std::string& target);
		void	guardGate( void );
} ;


#endif