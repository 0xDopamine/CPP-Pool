/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:13:03 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/11/15 17:13:03 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

File::File(std::ifstream file): file(file) {}

std::string File::read(std::ifstream file) {
	std::string output;

	if (file.is_open()) {
		while (file.good()) {
			file >> output;
		}
	}
	std::cout << output << std::endl;
}
