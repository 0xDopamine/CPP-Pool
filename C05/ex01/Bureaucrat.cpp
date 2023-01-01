/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 18:06:21 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/01 19:43:11 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default"), grade(1) {
    
    std::cout << "Bureaucrat default constructor called" << std::endl;
} ;

Bureaucrat::Bureaucrat(const std::string name, int const grade): name(name), grade(grade) {

    std::cout << "Bureaucrat constructor called" << std::endl;
    if (grade > 150)
        throw GradeTooHighException();
    else if (grade < 1)
        throw GradeTooLowException();
} ;

Bureaucrat::~Bureaucrat() {

    std::cout << "Bureaucrat destructor called" << std::endl;
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

void    Bureaucrat::signForm(const Form& F) {

    if (F.getSignature())
        std::cout << getName() << " signed " << F.getName() << std::endl;
    else if (!F.getSignature() && F.getRequiredGradeSign() > grade)
        std::cout << getName() << " couldn't sign the " << F.getName() << " because " <<  "grade too low";
}

std::ostream&   operator<<(std::ostream& output, const Bureaucrat& Buro)
{
    output << Buro.getName() << ", bureaucrat grade " << Buro.getGrade();
    return (output);
}