/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:14:44 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/03 21:06:06 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery Creation Form", 145, 137), target("default") {};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
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

std::string	ShrubberyCreationForm::getTarget() const {

	return (target);
}

void    ShrubberyCreationForm::beSigned(const Bureaucrat& Buro) {

    if (Buro.getGrade() <= requiredGradeSign)
		signature = true;
	else if (Buro.getGrade() > requiredGradeSign)
		throw GradeTooLowException();
}

void	ShrubberyCreationForm::execute(const Bureaucrat & executor) const {

	this->checkRequirements(executor);
	std::ofstream	file;
	file.open(target + "_schrubery");
	if (file.is_open())
	{
		file << "         v " << std::endl;
		file <<	"        >X<" << std::endl;
		file << "         A " << std::endl;			
		file << "        d$b" << std::endl;		
		file << "      .d$$$b." << std::endl;		
		file << "    .d$i$$$$$b." << std::endl;			
		file << "       d$$@b" << std::endl;			
		file << "      d$$$$ib" << std::endl;
		file << "    .d$$$$$$$b" << std::endl;		
		file << "   .d$$@$$$$$$$ib." << std::endl;		
		file << "      d$$i$$b" << std::endl;		
		file << "     d$$$$$@$b" << std::endl;		
		file << "  .d$@$$$$$$$$@b." << std::endl;		
		file << ".d$$$$i$$$$$$$$$$b." << std::endl;
		file << "        ###" << std::endl;	
		file << "        ###" << std::endl;	
		file << "        ###" << std::endl;	
	}
	file.close();
} ;