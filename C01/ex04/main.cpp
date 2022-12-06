/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:00:24 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/06 23:05:14 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "sed.hpp"
#include "sed.cpp"

int main(int argc, char **argv)
{
    if (argc > 3)
    {
        std::string filename = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        mySed mySed;
        mySed.init_file(filename);
        mySed.myreplace(s2, s1);
    }
    else
        std::cout << "Please enter a parameter." << std::endl;
}