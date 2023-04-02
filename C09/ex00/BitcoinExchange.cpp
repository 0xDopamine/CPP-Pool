/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:13:02 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/04/02 22:18:14 by mbaioumy         ###   ########.fr       */
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
    else
        std::cout << "Error: could not open file." << std::endl;
}

bool    check_date(std::string& date)
{
    std::stringstream iss(date);
    char    del;
    int     year, month, day;

    iss >> year >> del >> month >> del >> day;
    if (year > 9999 || year < 1980)
    {    
        std::cout << "Error: bad input ==> " << date << std::endl;
        return (false);
    }
    if (day < 1 || day > 31)
    {
        std::cout << "Error: bad input ==> " << date << std::endl;
        return (false);
    }
    if (month < 1 || month > 12)
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

void    BitcoinExchange::print_result(double &value, std::string &date) {

    double  rate;
    double  result; 
    std::map<std::string, double>::iterator it = map.upper_bound(date);
    if (it != map.begin())
        it--;
    rate = map[it->first];
    result = value * it->second;
    std::cout << date << "==> " << value << " = " << result << std::endl;
}

void    BitcoinExchange::openinputfile(std::string filename) {
    
    std::string line;
    double      value;
    std::string date;
    std::string tmp;
    bool        first_line = true;

    std::cout << filename;
    if (!filename.empty())
    {
        std::ifstream   file(filename);
        if (file.is_open())
        {
            while (std::getline(file, line))
            {
                std::stringstream   str(line);
                std::getline(str, date, '|'), str >> value;
                if (first_line)
                    first_line = false;
                else
                {
                    if (check_date(date) && check_value(value))
                        print_result(value, date);
                }
            }
        }
        else
            std::cout << "Error: could not open file." << std::endl;
    }
    
}
