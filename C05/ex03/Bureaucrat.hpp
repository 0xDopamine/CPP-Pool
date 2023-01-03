/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 18:03:55 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/01 20:24:12 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include "FormErrorException.hpp"
#include "Form.hpp"

class Form;

class Bureaucrat {

	private:
		const std::string   name;
		int           		grade;
		GradeTooHighException	highException;
		GradeTooLowException	lowException;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int const grade);
		~Bureaucrat();
		std::string getName() const;
		int			getGrade() const;
		void		increment();
		void		decrement();
		void		signForm(const Form& F);
		void		executeForm(Form const & form);
} ;

	std::ostream&	operator<<(std::ostream& output, const Bureaucrat& Buro);

#endif