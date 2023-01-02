/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SchrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:14:44 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/02 17:31:49 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SchrubberyCreationForm.hpp"

SchrubberyCreationForm::SchrubberyCreationForm(): Form("Schrubbery Creation Form", 145, 137), target("default") {};

SchrubberyCreationForm::SchrubberyCreationForm(std::string& target):
Form("Schrubbery Creation Form", 145, 137),
target(target)
{};

SchrubberyCreationForm::SchrubberyCreationForm(const SchrubberyCreationForm& Schrub) {

    *this = Schrub;
};

SchrubberyCreationForm::~SchrubberyCreationForm() {};

SchrubberyCreationForm&	SchrubberyCreationForm::operator=(const SchrubberyCreationForm& Schrub) {

	if (this != &Schrub)
		this->target = Schrub.target;
	return (*this);
}

void    SchrubberyCreationForm::beSigned(const Bureaucrat& Buro) {

    if (Buro.getGrade() == requiredGradeSign)
		signature = true;
	else if (Buro.getGrade() > requiredGradeSign)
		throw GradeTooLowException();
	else if (Buro.getGrade() < requiredGradeSign)
		throw GradeTooHighException();
}

void	SchrubberyCreationForm::execute(const std::string target) const {

	// ASCII tree
} ;