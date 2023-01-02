/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 20:50:03 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/02 17:32:44 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential Pardon", 25, 5), target("default") { };

PresidentialPardonForm::PresidentialPardonForm(std::string target):
Form("Presidential Pardon Form", 25, 5),
target(target)
{};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& P_form) {

	*this = P_form;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& P_form) {

	if (this != &P_form)
		this->target = P_form.target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {};

void	PresidentialPardonForm::beSigned(const Bureaucrat& Buro) {

	if (Buro.getGrade() == requiredGradeSign)
		signature = true;
	else if (Buro.getGrade() > requiredGradeSign)
		throw GradeTooLowException();
	else if (Buro.getGrade() < requiredGradeSign)
		throw GradeTooHighException();
}

void            PresidentialPardonForm::execute(const std::string target) const {
	
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
};
