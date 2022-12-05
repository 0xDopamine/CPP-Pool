/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:47:00 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/05 23:12:19 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::ft_search(int index)
{
	int	i = 0;
	std::string	search;
	std::string	first_name = contact[index].get_first_name();
	std::string	last_name = contact[index].get_last_name();
	std::string	nickname = contact[index].get_nickname();

	if (first_name.length() > 9)
		first_name = first_name.substr(0, 9) + ".";
	if (last_name.length() > 9)
		last_name = last_name.substr(0, 9) + ".";
	if (nickname.length() > 9)
		nickname = nickname.substr(0, 9) + ".";
	std::cout << " | " << std::right <<  std::setw(10)
		<< "Index"  << "|" << std::setw(10)
		<< "First name" << "|" << std::setw(10)
		<< "Last name" << "|" << std::setw(10)
		<< "Nickname" << "|" << std::endl;
	while (i < index)
	{
		std::string	first_name = contact[i].get_first_name();
		std::string	last_name = contact[i].get_last_name();
		std::string	nickname = contact[i].get_nickname();

		if (first_name.length() > 9)
			first_name = first_name.substr(0, 9) + ".";
		if (last_name.length() > 9)
			last_name = last_name.substr(0, 9) + ".";
		if (nickname.length() > 9)
			nickname = nickname.substr(0, 9) + ".";
		std::cout << " | "  << std::right 
			<<  std::setw(10) << contact[i].get_index() << "|"
			<< std::setw(10)<< first_name << "|"
			<< std::setw(10)<< last_name << "|"
			<< std::setw(10)<< nickname << "|" << std::endl;
		i++;
	}
	std::cout << "Enter the contact you want to search for or BACK if you want to get back to the main menu: " << std::endl;
	std::getline(std::cin, search);
	if (search == "BACK")
		return ;
	while(search.length() == 0)
	{
		std::cout << "Segment can't be empty." << std::endl;
		std::cout << "Enter the contact you want to search for: " << std::endl;
		std::getline(std::cin, search);
	}
	while(search.length() != 1 || std::isalpha(search[0]) || std::stol(search) >= (long)index)
	{
		std::cout << "Index not found, please enter one of the indexes above" << std::endl;
		std::cout << "Enter the contact you want to search for: " << std::endl;
		std::getline(std::cin, search);
		if (search == "BACK")
			return ;
	}
	std::cout << std::endl;
	ft_search_result(std::stol(search));
	std::cout << std::endl;
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

	std::cout << "Add a contact: " << std::endl;
	std::cout << "first name: ";
	std::cin >> first_name;
	contact[0].set_first_name(first_name);
	std::cout << "last name: ";
	std::cin >> last_name;
	contact[0].set_last_name(last_name);
	std::cout << "nickname: ";
	std::cin >> nickname;
	contact[0].set_nickname(nickname);
	std::cout << "phone number: ";
	std::cin >> phone_number;
	contact[0].set_phone_number(phone_number);
	std::cout << "darkest secret: ";
	std::cin >> darkest_secret;
	contact[0].set_darkest_secret(darkest_secret);
}

void	PhoneBook::ft_search_result(long index)
{
	std::string	first_name = contact[index].get_first_name();
	std::string	last_name = contact[index].get_last_name();
	std::string	nickname = contact[index].get_nickname();
	std::string	phone_number = contact[index].get_phone_number();
	std::string	darkest_secret = contact[index].get_darkest_secret();
	std::string	numbr = "Phone Number";
	std::string	scrt = "Darkest Secret";

	numbr = numbr.substr(0, 9) + ".";
	scrt = scrt.substr(0, 9) + ".";
	if (first_name.length() > 9)
		first_name = first_name.substr(0, 9) + ".";
	if (last_name.length() > 9)
		last_name = last_name.substr(0, 9) + ".";
	if (nickname.length() > 9)
		nickname = nickname.substr(0, 9) + ".";
	if (phone_number.length() > 9)
		phone_number = phone_number.substr(0, 9) + ".";
	if (darkest_secret.length() > 9)
		darkest_secret = darkest_secret.substr(0, 9) + ".";
	std::cout << "|" << std::right <<  std::setw(10)  << "Index"  
				<< "|" << std::right << std::setw(10) << contact[index].get_index() << "|" << std::endl
				<< "|" << std::right << std::setw(10) << "First name"
				<< "|" << std::right << std::setw(10) << first_name << "|" << std::endl
				<< "|" << std::right << std::setw(10) << "Last name"
				<< "|" << std::right << std::setw(10) << last_name  << "|"  << std::endl
				<< "|" << std::right << std::setw(10) << "Nickname"
				<< "|" << std::right << std::setw(10) << nickname << "|" << std::endl
				<< "|" << std::right << std::setw(10) << numbr
				<< "|" << std::right << std::setw(10) << phone_number << "|" << std::endl
				<< "|" << std::right << std::setw(10) << scrt
				<< "|" << std::right << std::setw(10) << darkest_secret  << "|" << std::endl;
}