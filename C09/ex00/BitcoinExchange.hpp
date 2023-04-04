/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:07:29 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/04/03 21:46:34 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>

typedef struct s_data {
    
	double          value;
	std::string     tmp;
	bool            first_line;
    std::string		line;
	std::string 	date;
	double			rate;
	int				lines_count;
    
} t_data ;

class BitcoinExchange {
    
    private:
        std::map<std::string, double> map;
        bool    status;
        t_data  data;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& btc);
        BitcoinExchange(std::map<std::string, double> map, bool status, t_data data);
        ~BitcoinExchange();
        void    opendatabase(void);
        void    openinputfile(char **argv);
        void    print_result(double &value, std::string &date);
        BitcoinExchange& operator=(const BitcoinExchange& btc);
} ;

#endif