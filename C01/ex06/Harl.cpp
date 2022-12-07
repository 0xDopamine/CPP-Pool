/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:38:40 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/08 00:40:32 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#define	callMemberFunction(object,ptrToMember) ((object).*(ptrToMember))
typedef void    (Harl::*pfMemFn) (void); 

Harl::Harl() {};

Harl::~Harl() {};

void    Harl::complain(std::string level)
{
	Harl	harl;
	pfMemFn arr[4] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			switch (i)
			{
				case 0:
					while (i < 4)
					{
						std::cout << "[ " + levels[i] + " ]" << std::endl;
						callMemberFunction(harl, arr[i]) ();
						std::cout << std::endl;
						i++;
					}
					break ;
				case 1:
					while (i < 4)
					{
						std::cout << "[ " + levels[i] + " ]" << std::endl;
						callMemberFunction(harl, arr[i]) ();
						std::cout << std::endl;
						i++;
					}
					break ;
				case 2:
					while (i < 4)
					{
						std::cout << "[ " + levels[i] + " ]" << std::endl;
						callMemberFunction(harl, arr[i]) ();
						std::cout << std::endl;
						i++;
					}
					break ;
				case 3:
					while (i < 4)
					{
						std::cout << "[ " + levels[i] + " ]" << std::endl;
						callMemberFunction(harl, arr[i]) ();
						std::cout << std::endl;
						i++;
					}
					break ;
				break ;
			}
		}
		if (i == 3)
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}