/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:45:35 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/01 21:32:19 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class   Form
{
	protected:
		const std::string	name;
		bool				signature;
		const int			requiredGradeSign;
		const int			requiredGradeExecute;
	public:
		Form();
		Form(const std::string& name, const int& requiredGradeSign, const int& requiredGradeExecute);
		Form(const Form& F);
		~Form();
		Form&				operator=(const Form& F);
		int					getRequiredGradeSign() const;
		int					getRequiredGradeExecute() const;
		std::string			getName() const;
		bool				getSignature() const;
		virtual void		beSigned(const Bureaucrat& Buro) const = 0;
		
} ;
		
		std::ostream&	operator<<(std::ostream& output, const Form& F);

#endif