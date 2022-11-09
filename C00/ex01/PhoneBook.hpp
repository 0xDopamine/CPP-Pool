/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:53:14 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/11/02 10:53:14 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP


class Contact {

	private:
		int     		index;
		std::string     first_name;
		std::string     last_name;
		std::string     nickname;
		std::string     phone_number;
		std::string     darkest_secret;
	public:
		void    set_first_name(std::string f_name) { first_name = f_name; };
		void	set_last_name(std::string l_name) { last_name = l_name; };
		void	set_nickname(std::string n_name) { nickname = n_name; };
		void	set_phone_number(std::string number) { phone_number = number; };
		void	set_darkest_secret(std::string secret) { darkest_secret = secret; };
		void	set_index(int ind) { index = ind; };
		std::string	get_first_name() { return first_name; };
		std::string	get_last_name() { return last_name; };
		std::string	get_nickname() { return nickname; };
		std::string	get_phone_number() { return phone_number; };
		std::string	get_darkest_secret() { return darkest_secret; };
		int		get_index() { return index; };
} ;

class PhoneBook {
	private:
		Contact contact[8];
	public:
		void    ft_add(int index);
		void	ft_replace(int index);
		void	ft_search(int index);
		void	ft_search_result(int con_index);
		void	print(int index) {
			int	i = 0;

			printf("print %d\n", index);
			while (i < index)
			{	
				std::cout << contact[i].get_first_name() + "\n";
				std::cout << contact[i].get_last_name() + "\n";
				std::cout << contact[i].get_nickname() + "\n";
				std::cout << contact[i].get_phone_number() + "\n";
				std::cout << contact[i].get_darkest_secret() + "\n";
				i++;
			}
		}
} ;

void	PhoneBook::ft_search_result(int con_index)
{
	std::cout << " | " << std::right <<  std::setw(10)  << "Index"  
				<< "|" << std::setw(10) << "First name"
				<< "|" << std::setw(10) << "Last name"
				<< "|" << std::setw(10) << "Nickname"
				<< "|" << std::setw(10) << "Phone number"
				<< "|" << std::setw(10) << "Darkest secret" << "|\n";
	std::cout << " | " << std::right <<  std::setw(10)  << contact[con_index].get_index()  
				<< "|" << std::setw(10) << contact[con_index].get_first_name()
				<< "|" << std::setw(10) << contact[con_index].get_last_name()
				<< "|" << std::setw(10) << contact[con_index].get_nickname()
				<< "|" << std::setw(10) << contact[con_index].get_phone_number()
				<< "|" << std::setw(10) << contact[con_index].get_darkest_secret() << "|\n";

}

void	PhoneBook::ft_search(int index)
{
	int	i = 0;
	int	con_index;
	std::cout << " | " << std::right <<  std::setw(10)  << "Index"  << "|" << std::setw(10) << "First name" << "|\n";
	while (i < index)
	{
		std::cout << " | "  << std::right <<  std::setw(10)   << contact[i].get_index() << "|" << std::setw(10)<< contact[i].get_first_name()<< "|\n";
		i++;
	}
	std::cout << "Enter the contact you want to search for: \n";
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
	std::cout << "Add a contact: \n";
	std::cout << "first name: \n";
	std::cin >> first_name;
	contact[i].set_first_name(first_name);
	std::cout << "last name: \n";
	std::cin >> last_name;
	contact[i].set_last_name(last_name);
	std::cout << "nickname: \n";
	std::cin >> nickname;
	contact[i].set_nickname(nickname);
	std::cout << "phone number: \n";
	std::cin >> phone_number;
	contact[i].set_phone_number(phone_number);
	std::cout << "darkest secret: \n";
	std::cin >> darkest_secret;
	contact[i].set_darkest_secret(darkest_secret);
}

void	PhoneBook::ft_replace(int index)
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


#endif