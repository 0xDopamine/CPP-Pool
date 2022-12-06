/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mySed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:04:44 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/11/15 17:04:44 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYSED_HPP
#define MYSED_HPP


#include "iostream"
#include <fstream>

class mySed {
	private:
		std::ifstream file;
		std::string filename;
		std::string line;
		std::string s2;
	public:
		mySed();
		~mySed();
		std::string read(std::ifstream file);
		void	init_file(std::string newFile);
		void	myreplace(std::string s2, std::string s1);
		void	writeToFile( void );

};

#endif