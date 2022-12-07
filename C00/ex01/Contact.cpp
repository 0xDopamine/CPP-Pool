/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:35:41 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/07 20:54:40 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::set_first_name(std::string f_name) { first_name = f_name; };

void	Contact::set_last_name(std::string l_name) { last_name = l_name; };

void	Contact::set_nickname(std::string n_name) { nickname = n_name; };

void	Contact::set_phone_number(std::string number) { phone_number = number; };

void	Contact::set_darkest_secret(std::string secret) { darkest_secret = secret; };

void	Contact::set_index(int ind) { index = ind; };

std::string	Contact::get_first_name( void ) { return (first_name); };

std::string Contact::get_last_name( void ) { return (last_name); };

std::string Contact::get_nickname( void ) { return (nickname); };

std::string Contact::get_phone_number( void ) { return (phone_number); };

std::string Contact::get_darkest_secret( void ) { return(darkest_secret); };

int		Contact::get_index( void ) { return (index); };
