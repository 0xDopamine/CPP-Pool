/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 18:03:55 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/31 21:15:16 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat {

	private:
		const std::string   name;
		int           		grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int const grade);
		~Bureaucrat();
		std::string getName() const;
		int			getGrade() const;
		void		increment(int& grade);
		void		decrement(int& grade);
		Bureaucrat&	operator++();
		Bureaucrat&	operator--();
} ;

#endif