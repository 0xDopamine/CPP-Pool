/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:53:14 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/11/29 15:49:16 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

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
		void	ft_replace(void);
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

#endif