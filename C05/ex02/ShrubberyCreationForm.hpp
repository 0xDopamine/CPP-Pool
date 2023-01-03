/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:14:42 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/03 15:51:50 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCREATIONFORM_HPP
#define ShrubberyCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& Schrub);
		~ShrubberyCreationForm();
		std::string	getTarget() const;
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& Schrub);
		void	beSigned(const Bureaucrat& Buro);
		void	execute(const Bureaucrat & executor) const;
} ;

#endif