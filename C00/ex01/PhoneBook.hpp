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
		std::string	get_first_name() { return first_name; };
		std::string	get_last_name() { return last_name; };
		std::string	get_nickname() { return nickname; };
		std::string	get_phone_number() { return phone_number; };
		std::string	get_darkest_secret() { return darkest_secret; };
} ;

class PhoneBook {
	private:
		int     index;
		Contact contact[8];
	public:
		void    ft_add(int index);
		void	ft_replace(int index);
		// void	ft_search(Contact contact);
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

void	PhoneBook::ft_add(int index)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	PhoneBook::index = index;
	std::cout << "Add a contact: \n";
	std::cout << "first name: \n";
	std::cin >> first_name;
	contact[index].set_first_name(first_name);
	std::cout << "last name: \n";
	std::cin >> last_name;
	contact[index].set_last_name(last_name);
	std::cout << "nickname: \n";
	std::cin >> nickname;
	contact[index].set_nickname(nickname);
	std::cout << "phone number: \n";
	std::cin >> phone_number;
	contact[index].set_phone_number(phone_number);
	std::cout << "darkest secret: \n";
	std::cin >> darkest_secret;
	contact[index].set_darkest_secret(darkest_secret);
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