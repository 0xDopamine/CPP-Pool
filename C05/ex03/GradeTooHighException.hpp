/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GradeTooHighException.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:04:33 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/01 18:26:51 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRADETOOHIGHEXCEPTION_HPP
#define GRADETOOHIGHEXCEPTION_HPP

#include <iostream>
#include <exception>

class   GradeTooHighException: public std::exception
{
	public:
		const char* what() const throw();
} ;

#endif