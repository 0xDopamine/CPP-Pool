/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:15:59 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/03 21:11:07 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat  akhenouch("Akhenouch", 120);
        Bureaucrat  elAlami("El Alami", 5);
        Bureaucrat  berrada("Berrada", 1);

        PresidentialPardonForm  form("ayman");
        ShrubberyCreationForm  tree("3ellal");
        RobotomyRequestForm     robo("Hamid");

        std::cout << "---Shrubbery Creation Form---" << std::endl;
        std::cout << std::endl;
        tree.beSigned(akhenouch);
        akhenouch.signForm(tree);
        akhenouch.executeForm(tree);
        std::cout << std::endl;
        std::cout << "---Presidential Pardon Form---" << std::endl;
        std::cout << std::endl;
        form.beSigned(elAlami);
        elAlami.signForm(form);
        elAlami.executeForm(form);    
        std::cout << std::endl;
        std::cout << "---Robotomy Request Form---" << std::endl;
        std::cout << std::endl;
        robo.beSigned(berrada);
        berrada.signForm(robo);
        berrada.executeForm(robo);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return(0);
}