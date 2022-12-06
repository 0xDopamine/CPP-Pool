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

void	mySed::init_file(std::string newFile)
{
	std::ifstream	test;

	this->filename = newFile;
	this->file.open(this->filename);
	if (this->file.is_open())
		getline(this->file, this->line);
	else
		std::cout << newFile <<  ": File does not exist" << std::endl;
}

void    mySed::writeToFile( void )
{
	std::string	out = "out." + this->filename + ".txt";
	std::ofstream   outfile(out);

	outfile << this->line;
}

void	mySed::myreplace(std::string s2, std::string s1)
{
	int	len = s2.length();
	int	index = this->line.find(s1); 
	std::string	res;

	for(int i = 0;  i < (int)this->line.length(); i++) {
		if (i == index) {
			this->line.erase(i, len);
			this->line.insert(i, s2);
			break ;
		} 
	}
	writeToFile();
} ;
