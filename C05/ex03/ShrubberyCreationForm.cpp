/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:14:44 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/02 17:31:49 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery Creation Form", 145, 137), target("default") {};

ShrubberyCreationForm::ShrubberyCreationForm(std::string& target):
Form("Shrubbery Creation Form", 145, 137),
target(target)
{};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& Schrub): Form(Schrub) {

    *this = Schrub;
};

ShrubberyCreationForm::~ShrubberyCreationForm() {};

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& Schrub) {

	if (this != &Schrub)
		this->target = Schrub.target;
	return (*this);
}

void    ShrubberyCreationForm::beSigned(const Bureaucrat& Buro) {

    if (Buro.getGrade() == requiredGradeSign)
		signature = true;
	else if (Buro.getGrade() > requiredGradeSign)
		throw GradeTooLowException();
	else if (Buro.getGrade() < requiredGradeSign)
		throw GradeTooHighException();
}

void	ShrubberyCreationForm::execute(const Bureaucrat & executor) const {

	this->checkRequirements(executor);
	// ASCII tree
} ;