/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 17:47:21 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/02 19:25:17 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "intern.hpp"

Intern::Intern() {} ;

Intern::~Intern() {} ;

Form*   Intern::makeForm(std::string& name, std::string& target) {

    std::string f_names[] = {"robotomy request", "presidential pardon", "schrubbery creation"};
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
                    std::cout << "Intern creates Schrubbery Creation Form" << std::endl;
                    return (new SchrubberyCreationForm(target));
                default:
                    std::cout << "form not found" << std::endl;
            }
        }
    }
} ;