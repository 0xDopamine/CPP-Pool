/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:33:30 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/07 20:45:31 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact {

	private:
		int     		index;
		std::string     first_name;
		std::string     last_name;
		std::string     nickname;
		std::string     phone_number;
		std::string     darkest_secret;
	public:
		void		set_first_name(std::string f_name);
		void		set_last_name(std::string l_name);
		void		set_nickname(std::string n_name);
		void		set_phone_number(std::string number);
		void		set_darkest_secret(std::string secret);
		void		set_index(int ind);
		std::string	get_first_name( void );
		std::string	get_last_name( void );
		std::string	get_nickname( void );
		std::string	get_phone_number( void );
		std::string	get_darkest_secret( void );
		int			get_index( void );
} ;

#endif