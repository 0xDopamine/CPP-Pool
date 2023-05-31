/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:13:02 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/05/31 16:25:18 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange():status(true) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& btc) {

	*this = btc;
}

BitcoinExchange::BitcoinExchange(std::map<std::string, double> map, bool status, t_data data): map(map), status(status), data(data) {}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange& btc) {

	if (this != &btc)
	{
		this->data = btc.data;
		this->map = btc.map;
		this->status = btc.status;
	}
	return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

void    BitcoinExchange::opendatabase(void) {
	
	std::ifstream	file("data.csv");
	data.lines_count = 0;
	data.first_line = true;

	if (file.is_open())
	{
		while (std::getline(file, data.line))
		{
			std::stringstream   str(data.line);
			while (std::getline(str, data.date, ','), str >> data.rate)
				map[data.date] = data.rate;
			data.lines_count++;
		}
		if (data.lines_count == 0)
		{
			std::cout << "Error: data file is empty";
			status = false;
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
	if (value == 0)
	{
		std::cout << "Error: value can't be 0 or blank" << std::endl;
		return (false);
	}
	else if (value < 0)
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
	if (result > 2147483647)
	{
		std::cout << "Error: bad result!" << std::endl;
		return ;
	}
	std::cout << date << "==> " << value << " = " << result << std::endl;
}

void    BitcoinExchange::openinputfile(char **argv) {

	if (argv[1])
	{
		data.lines_count = 0;
		if (status)
		{
			std::ifstream   file(argv[1]);
			if (file.is_open())
			{
				while (std::getline(file, data.line))
				{
					std::string val;
					size_t	pos;
					std::stringstream   str(data.line);
					std::getline(str, data.date, '|'), str >> val;
					
					if (val.find(",") == std::string::npos) {
						while ((pos = val.find("..")) != std::string::npos) {
							val.replace(pos, 2, ".");
						}
					}
					else {
						while ((pos = val.find(",,")) != std::string::npos) {
							val.replace(pos, 2, ".");
						}
					}
					std::stringstream ss(val);
					ss >> data.value;
					if (data.first_line && data.date == "date ")
						data.first_line = false;
					else
					{
						if (check_date(data.date) && check_value(data.value))
							print_result(data.value, data.date);
					}
					data.lines_count++;
				}
				if (data.lines_count == 0)
					std::cout << "Error: input file is empty";
			}
			else
				std::cout << "Error: could not open file." << std::endl;
		}
	}
	else
		std::cout << "Error: could not open file." << std::endl;
}
