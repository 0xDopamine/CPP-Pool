/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:43:26 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/04 19:30:48 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <iomanip>
#include "PhoneBook.hpp"

int	main(void)
{
	int			index = 0;
	std::string	command;
	PhoneBook 	phonebook;

	while (index < 8)
	{
		std::cout << "Enter a command: " << std::endl;
		std::cout << "1. ADD" << std::endl;
		std::cout << "2. SEARCH" << std::endl;
		std::cout << "3. EXIT" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			std::cout << "---------------------" << std::endl;
			std::cout << "ADD" << std::endl;
			if (index == 7)
			{
				std::string	answer;
				std::cout << "You have reached the maximum number of contacts allowed\nDo you want to override an exisitng contact?\ntype y or n" << std::endl;
				std::getline(std::cin, answer);
				if (answer == "y")
				{
					std::cout << "---------------------" << std::endl;
					phonebook.ft_replace();
				}
			}
			else
			{
				phonebook.ft_add(index);
				index++;
			}
		}
		else if (command == "SEARCH")
		{
			std::cout << "---------------------" << std::endl;
			std::cout << "SEARCH\n";
			phonebook.ft_search(index);
		}
		else if (command == "EXIT")
		{
			std::cout << "---------------------" << std::endl;
			std::cout << "Exiting...\n";
			exit(1);
		}
		else
			std::cout << "COMMAND NOT FOUND\n";
	}
	return (0);
}