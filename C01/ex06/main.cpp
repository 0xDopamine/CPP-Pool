/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:15:21 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/19 17:39:19 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

bool    ft_find_level(std::string level)
{
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++) {
        if (levels[i] == level)
            return (true);
    }
    return (false);
}

int main(int argc, char **argv)
{
    Harl harl;
    if (argc > 1)
    {    
        std::string level = argv[1];
        if (ft_find_level(level))
            harl.complain(level);
        else
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;    
    }
    else
        std::cout << "Not enough arguments" << std::endl;
    return (0);
}