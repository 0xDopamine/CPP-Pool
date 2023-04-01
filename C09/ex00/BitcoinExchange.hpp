/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:07:29 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/04/01 18:13:52 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>

class BitcoinExchange {
    
    private:
        std::map<std::string, double> map;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        void    opendatabase(void);
        void    openinputfile(std::string filename);
        void    print_result();
} ;

#endif