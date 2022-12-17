/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:00:24 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/17 22:34:01 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "sed.hpp"

int main(int argc, char **argv)
{
    if (argc > 3)
    {
        std::string filename = argv[1];
        std::string toFind = argv[2];
        std::string toReplace = argv[3];
        mySed mySed;
        mySed.init_file(filename, toFind, toReplace);
    }
    else
        std::cerr << "Please enter a parameter." << std::endl;
}
