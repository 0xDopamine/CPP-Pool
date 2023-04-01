/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:13:02 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/04/01 18:32:53 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

void    BitcoinExchange::opendatabase(void) {
    
    std::string line;
    std::ifstream file("data.csv");
    std::string date;
    double rate;

    if (file.is_open())
    {
        while (std::getline(file, line))
        {
            std::stringstream   str(line);
            while (std::getline(str, date, ','), str >> rate)
                map[date] = rate;
        }
    }
}

void    BitcoinExchange::openinputfile(std::string filename) {
    
    std::string line;
    std::ifstream   file(filename);

    if (file.is_open())
    {
        while (std::getline(file, line))
        {
            
        }
    }
}