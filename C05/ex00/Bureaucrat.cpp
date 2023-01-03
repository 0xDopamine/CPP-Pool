/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 18:06:21 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/03 18:52:02 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default"), grade(1) {
	
} ;

Bureaucrat::Bureaucrat(const std::string name, int const grade): name(name), grade(grade) {

	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
} ;

Bureaucrat::Bureaucrat(const Bureaucrat& Buro) {

	*this = Buro;
}

Bureaucrat::~Bureaucrat() {

} ;

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& Buro) {
   
	if (this != &Buro)
		this->grade = Buro.grade;
	return (*this);
} ;

std::string Bureaucrat::getName() const {

	return (name);
} ;

int         Bureaucrat::getGrade() const {

	return (grade);
} ;

void        Bureaucrat::increment() {

	if (grade == 1)
		throw GradeTooHighException();
	grade--;
} ;

void    Bureaucrat::decrement() {

	if (grade == 150)
		throw GradeTooLowException();
	grade++;
} ;

std::ostream&   operator<<(std::ostream& output, const Bureaucrat& Buro)
{
	output << Buro.getName() << ", bureaucrat grade " << Buro.getGrade();
	return (output);
}