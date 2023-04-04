/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:33:45 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/04/03 21:40:01 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"



int main(int argc, char **argv)
{
    argc = 0;
    BitcoinExchange btc;

    btc.opendatabase();
    btc.openinputfile(argv);
}
