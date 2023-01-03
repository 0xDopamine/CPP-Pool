/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:15:59 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/03 21:09:02 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat  akhenouch("akhenouch", 1);
        Form        form("form", 1, 1);
        form.beSigned(akhenouch);
        akhenouch.signForm(form);
        Bureaucrat  elAlami("El Alami", 6);
        Form        form2("chahadat sokna", 5, 1);
        form2.beSigned(elAlami);
        elAlami.signForm(form2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return(0);
}