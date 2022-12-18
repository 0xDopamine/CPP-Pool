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

#include <iostream>
#include <fstream>

void	myreplace(std::string toFind, std::string toReplace, std::string &line);
void	init_file(std::string filename, std::string toFind, std::string toReplace);


#endif