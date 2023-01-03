/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:45:33 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/03 17:59:36 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("default"), signature(false), requiredGradeSign(1), requiredGradeExecute(1) {};

Form::Form(const std::string& name, const int& requiredGradeSign, const int& requiredGradeExecute):
name(name),
signature(false),
requiredGradeSign(requiredGradeSign),
requiredGradeExecute(requiredGradeExecute)
{
	 if (requiredGradeSign > 150)
		throw GradeTooLowException();
	else if (requiredGradeSign < 1)
		throw GradeTooHighException();
} ;

Form::Form(const Form& F):
name(F.name),
signature(F.signature),
requiredGradeSign(F.requiredGradeSign),
requiredGradeExecute(F.requiredGradeExecute) { } ;

Form::~Form() {};

int	Form::getRequiredGradeSign() const {

	return (requiredGradeSign);
}

int	Form::getRequiredGradeExecute() const {

	return (requiredGradeExecute);
}

std::string	Form::getName() const {

	return (name);
}

bool	Form::getSignature() const {

	return (signature);
}

Form&   Form::operator=(const Form& F) {
	
	if (this != &F)
		this->signature = F.signature;
	return (*this);
}

void    Form::beSigned(const Bureaucrat& Buro) {
	
	if (Buro.getGrade() <= requiredGradeSign)
		signature = true;
	else if (Buro.getGrade() > requiredGradeSign)
		throw GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& output, const Form& F) {

	output << "name: " << F.getName() << ", signature: " << F.getSignature() << ", required signing grade: "
	<< F.getRequiredGradeSign() << ", required grade to execute: " << F.getRequiredGradeExecute() << std::endl;

	return (output);
}