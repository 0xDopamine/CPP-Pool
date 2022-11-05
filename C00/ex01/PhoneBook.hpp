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
		void	print(void) {
			std::cout << first_name + "\n";
			std::cout << last_name + "\n";
			std::cout << nickname + "\n";
			std::cout << phone_number + "\n";
			std::cout << darkest_secret + "\n";
		}
		
} ;

class PhoneBook {
	private:
		int     index;
		Contact contact[8];
	public:
		void    ft_add(int index, Contact contact);
		void	ft_replace(int index, Contact contact);
		void	ft_search(Contact contact);
} ;

void	PhoneBook::ft_add(int index, Contact contact)
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
	contact.set_first_name(first_name);
	std::cout << "last name: \n";
	std::cin >> last_name;
	contact.set_last_name(last_name);
	std::cout << "nickname: \n";
	std::cin >> nickname;
	contact.set_nickname(nickname);
	std::cout << "phone number: \n";
	std::cin >> phone_number;
	contact.set_phone_number(phone_number);
	std::cout << "darkest secret: \n";
	std::cin >> darkest_secret;
	contact.set_darkest_secret(darkest_secret);
	contact.print();
}

void	PhoneBook::ft_replace(int index, Contact contact)
{
	
}

void	Phonebook::ft_search(Contact *contact)
{
	
}

#endif