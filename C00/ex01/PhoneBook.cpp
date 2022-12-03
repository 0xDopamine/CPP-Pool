/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:43:26 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/03 19:12:36 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <iomanip>
#include "PhoneBook.hpp"

int	main(void)
{
	int	command;
	int	index = 0;
	PhoneBook phonebook;

	while (index < 8)
	{
		std::cout << "Enter a command: \n";
		std::cout << "1. ADD\n";
		std::cout << "2. SEARCH\n";
		std::cout << "3. EXIT\n";
		std::cin >> command;
		switch (command) {
			case 1:
				std::cout << "---------------------\n";
				std::cout << "ADD\n";
				if (index == 7)
				{
					char answer;
					std::cout << "You have reached the maximum number of contacts allowed\nDo you want to override an exisitng contact?\ntype y or n\n";
					std::cin >> answer;
					if (answer == 'y')
					{
						std::cout << "---------------------\n";
						phonebook.ft_replace();
					}
					else
						break ;
				}
				else
				{
					phonebook.ft_add(index);
					index++;
				}
				break ;
			case 2:
				std::cout << "---------------------\n";
				std::cout << "SEARCH\n";
				phonebook.ft_search(index);
				break ;
			case 3: {
				std::cout << "---------------------\n";
				std::cout << "Exiting...\n";
				exit(1);
				break ;
			}
			default:
				std::cout << "COMMAND NOT FOUND\n";
				command = 0;
				break ;
		}
	}
	return (0);
}