/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:19:29 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/25 21:33:49 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
#define SCRAVTRAP_HPP



#include "ClapTrap.hpp"

class ScravTrap : public ClapTrap
{
	public:
		ScravTrap(std::string name);
		~ScravTrap( void );
		void	attack(const std::string& target);
		void	gua
} ;


#endif