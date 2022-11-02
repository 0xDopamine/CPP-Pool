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

void	ft_add(void)
{
	PhoneBook *data;

	std::cout << "Add a contact: \n";
	std::cout << "first name: \n";
	std::cin >> data->first_name;
	std::cout << "last name: \n";
	std::cin >> data.last_name;
	std::cout << "nickname: \n";
	std::cin >> data.nickname;
	std::cout << "phone number: \n";
	std::cin >> data.phone_number;
	std::cout << "darkest secret: \n";
	std::cin >> data.darkest_secret;

}

int	main(int argc, char **argv)
{
	int	command;

	std::cout << "Enter a command: \n";
	std::cout << "1. ADD\n";
	std::cout << "2. SEARCH\n";
	std::cout << "3. EXIT\n";

	std::cin >> command;
	switch (command) {
		case 1:
			std::cout << "ADD\n";
			ft_add();
			break ;
		case 2:
			std::cout << "SEARCH\n";
			break ;
		case 3: {
			std::cout << "Exiting...\n";
			exit(1);
			break ;
		}
		default:
			std::cout << "COMMAND NOT FOUND\n";
			break ;
	}	
	
	// if (!strcmp((const char *)command, "ADD"))
	// 	std::cout << "------ADD------";
	// else if (!strcmp((const char *)command, "SEARCH"))
	// 	std::cout << "------SEARCH------";
	// else if (!strcmp((const char *)command, "EXIT"))
	// {
	// 	std::cout << "------EXIT------";
	// 	exit(1);
	// }
	// else
	// 	std::cout << "Command not found";
	return (0);
}