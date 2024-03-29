/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:33:38 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/03 20:54:37 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy Request", 72, 45), target("default") {} ;

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robotomy Request", 72, 45), target(target) {};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& Robo): Form(Robo) {

    *this = Robo;
} ;

RobotomyRequestForm::~RobotomyRequestForm() {} ;

RobotomyRequestForm&    RobotomyRequestForm::operator=(const RobotomyRequestForm& Robo) {

    if (this != &Robo)
        this->target = Robo.target;
    return (*this);
}

void    RobotomyRequestForm::beSigned(const Bureaucrat& Buro) {

   if (Buro.getGrade() <= requiredGradeSign)
		signature = true;
	else if (Buro.getGrade() > requiredGradeSign)
		throw GradeTooLowException();
}

void            RobotomyRequestForm::execute(const Bureaucrat & executor)  const {

	this->checkRequirements(executor);
    std::cout << "*DRILLING NOISES*" << std::endl;
    if (rand() % 2 == 0)
        std::cout << target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << target << " robotomized failed successfully hehe, did he die?" << std::endl;
};
