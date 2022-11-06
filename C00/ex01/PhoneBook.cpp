/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:43:26 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/11/02 10:43:26 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "PhoneBook.hpp"

int	main(int argc, char **argv)
{
	int	command;
	int	index = 0;
	PhoneBook phonebook;
	Contact	contact[8];

	while (index < 9)
	{
		std::cout << "Enter a command: \n";
		std::cout << "1. ADD\n";
		std::cout << "2. SEARCH\n";
		std::cout << "3. EXIT\n";
		std::cout << "4. PRINT\n";
		std::cin >> command;
		switch (command) {
			case 1:
				std::cout << "---------------------\n";
				std::cout << "ADD\n";
				if (index == 2)
				{
					char answer;
					std::cout << "You have reached the maximum number of contacts\nDo you want to override an exisitng contact?\ntype y or n\n";
					std::cin >> answer;
					if (answer == 'y')
					{
						std::cout << "---------------------\n";
						phonebook.ft_replace(index, contact);
					}
					else
						break ;
				}
				else
				{
					phonebook.ft_add(index, contact[index]);
					index++;
				}
				break ;
			case 2:
				std::cout << "---------------------\n";
				std::cout << "SEARCH\n";
				// phonebook.ft_search(contact);
				break ;
			case 3: {
				std::cout << "---------------------\n";
				std::cout << "Exiting...\n";
				exit(1);
				break ;
			}
			case 4: {
				std::cout << "---------------------\n";
				contact->print(index, contact);
				printf("%d\n", index);
				break ;
			}
			default:
				std::cout << "COMMAND NOT FOUND\n";
				break ;
		}
	}
	return (0);
}