/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormErrorException.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 01:29:15 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/03 01:29:15 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMERROREXCEPTION_HPP
#define FORMERROREXCEPTION_HPP

#include <exception>

class FormErrorException: public std::exception
{
    public:
        const char * what() const throw();    
} ;

#endif