/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mySed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:13:03 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/11/15 17:13:03 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

mySed::mySed() {};

mySed::~mySed() {};

void	mySed::init_file(std::string newFile) {
	this->filename = newFile;
	this->file.open(this->filename);

	getline(this->file, this->line);
}

void    mySed::writeToFile(std::string line) {
    std::string	out = "out." + this->filename;
	std::ofstream   outfile(out);

    outfile << this->line;
}

void	mySed::myreplace(std::string s2, std::string s1) {

	int j = 0;
	int	len = s2.length();
    int	index = this->line.find(s1); 
	std::string	res;

    for(int i = 0;  i < this->line.length(); i++) {
        if (i == index) {
            this->line.erase(i, len);
            this->line.insert(i, s2);
			break ;
        } 
    }
	writeToFile(this->line);
} ;
