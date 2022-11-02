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

class PhoneBook {
        int     index;
        char	first_name[10];
        char	last_name[10];
        char	nickname[10];
        char	phone_number[10];
        char	darkest_secret[20];
} ;

class Contacts {
    PhoneBook contact[8];
} ;


#endif