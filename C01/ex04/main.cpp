/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:00:24 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/11/15 14:00:24 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string myreplace(int index, std::size_t len, std::string s2, std::string line) {
    int j = 0;
    for(int i = index;  i < len; i++) {
        line[i] = 
    }
}

int main(int agrc, char **argv)
{
    std::ifstream file(argv[1]);
    std::string line;
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    int index;

    while(getline(file, line))

    while((index = line.find(s1)) != std::string::npos) {
        myreplace(index, line.length(), s2, line);
    } 
}