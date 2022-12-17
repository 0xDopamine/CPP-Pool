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

void	myreplace(std::string s2, std::string s1)
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

void	mySed::init_file(std::string newFile, std::string toFind, std::string toReplace)
{
	std::ifstream	test;
	std::string		line;

	this->filename = newFile;
	this->file.open(this->filename);
	if (this->file.is_open())
	{
		while (getline(this->file, this->line))
			myreplace(toReplace, toFind);
	
	}
	else
		std::cerr << newFile <<  ": File does not exist" << std::endl;
}

void    mySed::writeToFile( void )
{
	std::string	out = "out." + this->filename + ".txt";
	std::ofstream   outfile(out);

	outfile << this->line;
}

