/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:15:59 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/01 21:33:58 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat  akhenouch("akhenouch", 0);
        akhenouch.signForm(form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return(0);
}