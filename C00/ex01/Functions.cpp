/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:47:00 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/04 19:29:43 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::ft_search(int index)
{
	int	i = 0;
	int	con_index;
	std::cout << " | " << std::right <<  std::setw(10)  << "Index"  << "|" << std::setw(10) << "First name" << "|\n";
	while (i < index)
	{
		std::cout << " | "  << std::right <<  std::setw(10) << contact[i].get_index() << "|" << std::setw(10)<< contact[i].get_first_name()<< "|\n";
		i++;
	}
	std::cout << "Enter the contact you want to search for: " << std::endl;
	std::cin >> con_index;
	ft_search_result(con_index);
}

void	PhoneBook::ft_add(int i)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	contact[i].set_index(i);
	std::cout << "Add a contact:" << std::endl;
	std::cout << "first name: ";
	std::getline(std::cin, first_name);
	while(first_name.length() == 0)
	{
		std::cout << "Segment can't be empty." << std::endl;
		std::cout << "first name: ";
		std::getline(std::cin, first_name);
	}
	contact[i].set_first_name(first_name);
	std::cout << "last name: ";
	std::getline(std::cin, last_name);
	while(last_name.length() == 0)
	{
		std::cout << "Segment can't be empty." << std::endl;
		std::cout << "last name: ";
		std::getline(std::cin, last_name);
	}
	contact[i].set_last_name(last_name);
	std::cout << "nickname: ";
	std::getline(std::cin, nickname);
	while(nickname.length() == 0)
	{
		std::cout << "Segment can't be empty." << std::endl;
		std::cout << "nickname: ";
		std::getline(std::cin, nickname);
	}
	contact[i].set_nickname(nickname);
	std::cout << "phone number: ";
	std::getline(std::cin, phone_number);
	while(phone_number.length() == 0)
	{
		std::cout << "Segment can't be empty." << std::endl;
		std::cout << "phone number: ";
		std::getline(std::cin, phone_number);
	}
	contact[i].set_phone_number(phone_number);
	std::cout << "darkest secret: ";
	std::getline(std::cin, darkest_secret);
	while(darkest_secret.length() == 0)
	{
		std::cout << "Segment can't be empty." << std::endl;
		std::cout << "darkest secret: ";
		std::getline(std::cin, darkest_secret);
	}
	contact[i].set_darkest_secret(darkest_secret);
}


void	PhoneBook::ft_replace(void)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "Add a contact: \n";
	std::cout << "first name: \n";
	std::cin >> first_name;
	contact[0].set_first_name(first_name);
	std::cout << "last name: \n";
	std::cin >> last_name;
	contact[0].set_last_name(last_name);
	std::cout << "nickname: \n";
	std::cin >> nickname;
	contact[0].set_nickname(nickname);
	std::cout << "phone number: \n";
	std::cin >> phone_number;
	contact[0].set_phone_number(phone_number);
	std::cout << "darkest secret: \n";
	std::cin >> darkest_secret;
	contact[0].set_darkest_secret(darkest_secret);
}

void	PhoneBook::ft_search_result(int con_index)
{
	std::cout << " | " << std::right <<  std::setw(10)  << "Index"  
				<< "|" << std::setw(10) << "First name"
				<< "|" << std::setw(10) << "Last name"
				<< "|" << std::setw(10) << "Nickname"
				<< "|" << std::setw(15) << "Phone number"
				<< "|" << std::setw(15) << "Darkest secret" << "|" << std::endl;
	std::cout << " | " << std::right <<  std::setw(10)  << contact[con_index].get_index()  
				<< "|" << std::setw(10) << contact[con_index].get_first_name()
				<< "|" << std::setw(10) << contact[con_index].get_last_name()
				<< "|" << std::setw(10) << contact[con_index].get_nickname()
				<< "|" << std::setw(15) << contact[con_index].get_phone_number()
				<< "|" << std::setw(15) << contact[con_index].get_darkest_secret() << "|" << std::endl;

}