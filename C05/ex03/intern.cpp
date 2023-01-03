/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 17:47:21 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/03 21:11:07 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intern.hpp"

Intern::Intern() {} ;

Intern::~Intern() {} ;

Form*   Intern::makeForm(std::string name, std::string target) {

    std::string f_names[] = {"robotomy request", "presidential pardon", "Shrubbery creation"};
    for (int i = 0; i < 3; i++) {
        if (name == f_names[i])
        {
            switch (i) {
                case 0:
                    std::cout << "Intern creates Robotomy Request Form" << std::endl;
                    return new RobotomyRequestForm(target);
                case 1:
                    std::cout << "Intern creates Presidential Pardon Form" << std::endl;
                    return (new PresidentialPardonForm(target));
                case 2:
                    std::cout << "Intern creates Shrubbery Creation Form" << std::endl;
                    return (new ShrubberyCreationForm(target));
                default:
                    std::cout << "not found\n";
                    throw FormErrorException();
            }
        }
    }
    throw FormErrorException();
    return (NULL);
} ;