/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:38:40 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/11/17 12:38:40 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {};

Harl::~Harl() {};

void    Harl::complain(std::string level)
{
    if (level == "DEBUG")
        Harl::debug();
    else if (level == "INFO")
        Harl::info();
    else if (level == "WARNING")
        Harl::warning();
    else if (level == "ERROR")
        Harl::error();
}