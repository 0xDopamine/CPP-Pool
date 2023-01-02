/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SchrubberyCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:14:42 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/02 19:52:12 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCHRUBBERYCREATIONFORM_HPP
#define SCHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"

class SchrubberyCreationForm: public Form
{
	private:
		std::string target;
	public:
		SchrubberyCreationForm();
		SchrubberyCreationForm(std::string& target);
		SchrubberyCreationForm(const SchrubberyCreationForm& Schrub);
		~SchrubberyCreationForm();
		SchrubberyCreationForm&	operator=(const SchrubberyCreationForm& Schrub);
		 void	beSigned(const Bureaucrat& Buro);
		void			execute(const std::string target) const;
} ;

#endif