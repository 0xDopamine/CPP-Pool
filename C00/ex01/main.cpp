/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:43:26 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/09 18:08:35 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	int			index = 0;
	std::string	command;
	PhoneBook 	phonebook;

	while (true)
	{
		std::cout << std::endl;
		std::cout << "* WELCOME TO PHONEBOOK *" << std::endl;
		std::cout << std::endl;
		std::cout << "      ----MENU----" << std::endl;
		std::cout << "1. ADD" << std::endl;
		std::cout << "2. SEARCH" << std::endl;
		std::cout << "3. EXIT" << std::endl;
		std::cout << "Enter a command: ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			exit(1);
		if (command == "ADD")
		{
			std::cout << "-----------------------" << std::endl;
			std::cout << "      ----ADD----" << std::endl;
			if (index == 8)
			{
				std::string	answer;
				std::cout << "You have reached the maximum number of contacts allowed\nDo you want to override an exisitng contact?\ntype y or n" << std::endl;
				std::getline(std::cin, answer);
				if (std::cin.eof())
					exit(1);
				if (answer == "y")
				{
					std::cout << "-----------------------" << std::endl;
					index = 0;
					// phonebook.ft_replace(index);
				}
				else if (answer != "y" || answer != "n")
				{
					while (true)
					{
						std::cout << "answer should be y or n: ";
						std::getline(std::cin, answer);
						if (std::cin.eof())
							exit(1);
						if (answer == "y")
						{
							std::cout << "-----------------------" << std::endl;
							index = 0;
							break ;
						}
						else if (answer == "n")
							break ;
					}
				}
			}
			phonebook.ft_add(index);
			index++;
		}
		else if (command == "SEARCH")
		{
			std::cout << "-----------------------" << std::endl;
			std::cout << "      ----SEARCH----" << std::endl;
			phonebook.ft_search(index);
		}
		else if (command == "EXIT")
		{
			std::cout << "-----------------------" << std::endl;
			std::cout << "Exiting...\n";
			exit(1);
		}
		else
			std::cout << "COMMAND NOT FOUND\n";
	}
	return (0);
}