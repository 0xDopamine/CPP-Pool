/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 22:54:32 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/31 17:36:44 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()  {
    
    for (int i = 0; i < 100; i++)
        ideas[i] = "*random thoughts*";
    std::cout << "--Brain: " << "A brain just came into existence!" << std::endl;
} ;

Brain::Brain(const std::string ideas[]) {
    
    for (int i = 0; i < 100; i++)
        this->ideas[i] = ideas[i];
    std::cout << "--Brain: " << "A brain just came into existence!" << std::endl;
} ;

Brain::Brain(const Brain& Brainy) {

    *this = Brainy;
    std::cout << "--Brain: " << "A brain just came into existence!" << std::endl;
} ;

Brain::~Brain() {

    std::cout << "--Brain: " << "Brain just died!" << std::endl;
}

Brain&  Brain::operator=(const Brain& Brainy) {

    if (this != &Brainy)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = Brainy.ideas[i];
    }
    return (*this);
}

void    Brain::setter(std::string idea) {

    for (int i = 0; i < 100; i++)
        this->ideas[i] = idea;
}

std::string Brain::getter(void) {

    return (ideas[0]);
}

