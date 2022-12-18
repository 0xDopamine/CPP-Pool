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

void	myreplace(std::string toFind, std::string toReplace, std::string &line)
{

	for (size_t i = 0; i < line.length(); i++)
	{
		size_t	index = line.find(toFind);
		int		findLen = toFind.length();
		if (i == index)
		{
			line.erase(i, findLen);
			line.insert(i, toReplace);
		}
	}
}

void	init_file(std::string filename, std::string toFind, std::string toReplace)
{
	std::ifstream	file(filename);
	std::ofstream	outfile("out." + filename + ".txt");
	std::string		line;

	if (file.is_open())
	{
		while(std::getline(file, line))
		{
			myreplace(toFind, toReplace, line);
			outfile << line;
			outfile << '\n';
		}
		file.close();
		outfile.close();
	}
	else
		std::cerr << "file is not found" << std::endl;
}
