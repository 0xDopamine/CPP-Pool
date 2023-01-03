/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:15:59 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/03 17:51:46 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat  akhenouch("akhenouch", 2);
        akhenouch.increment();
        Bureaucrat  hafidElAlami("Hafid El Alami", 150);
        hafidElAlami.decrement();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return(0);
}