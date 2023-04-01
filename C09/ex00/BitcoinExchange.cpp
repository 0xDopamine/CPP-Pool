/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:13:02 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/04/01 21:53:02 by mbaioumy         ###   ########.fr       */
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

bool    check_date(std::string& date)
{
    if (date.length() != 11 || (date[4] != '-' || date[7] != '-'))
    {
        std::cout << "Error: bad input ==> " << date << std::endl;
        return (false);
    }
    int year = std::stoi(date.substr(0, 4));
    int month = std::stoi(date.substr(5, 2));
    int day = std::stoi(date.substr(8, 2));
    if (year > 9999 && year < 1980)
    {    
        std::cout << "Error: bad input ==> " << date << std::endl;
        return (false);
    }
    if (day < 1 && day > 31)
    {
        std::cout << "Error: bad input ==> " << date << std::endl;
        return (false);
    }
    if (month < 1 && month > 12)
    {
        std::cout << "Error: bad input ==> " << date << std::endl;
        return (false);
    }
    return (true);
}

bool    check_value(double& value)
{
    if (value < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return (false);
    }
    else if (value > 2147483647)
    {
        std::cout << "Error: too large a number." << std::endl;
        return (false);
    }
    return (true);
}

void    BitcoinExchange::print_result(double &value, std::string date) {

    
}

void    BitcoinExchange::openinputfile(std::string filename) {
    
    std::string line;
    std::ifstream   file(filename);
    double      value;
    std::string date;
    std::string tmp;
    bool        first_line;

    if (file.is_open())
    {
        while (std::getline(file, line))
        {
            std::stringstream   str(line);
            std::getline(str, date, '|'), str >> value;
            if (first_line)
                first_line = false;
            if (!first_line)
            {
                if (check_date(date) && check_value(value))
                {
                    std::cout << "ok" << std::endl;
                }
            }
        }
    }
}