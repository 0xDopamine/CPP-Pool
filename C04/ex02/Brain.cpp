/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 22:54:32 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/29 19:30:29 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain()  {
    
    for (int i = 0; i < 100; i++)
        ideas[i] = "*random thoughts*";
    std::cout << "A brain just came into existence!" << std::endl;
} ;

Brain::Brain(const std::string ideas[]) {
    
    for (int i = 0; i < 100; i++)
        this->ideas[i] = ideas[i];
    std::cout << "A brain just came into existence!" << std::endl;
} ;

Brain::Brain(const Brain& Brainy) {

    *this = Brainy;
    std::cout << "A brain just came into existence!" << std::endl;
} ;

Brain::~Brain() {

    std::cout << "Brain just died!" << std::endl;
}

Brain&  Brain::operator=(const Brain& Brainy) {

    if (this != &Brainy)
    {
        // std::cout << "BrainNNNNNNNNN \n";
        for (int i = 0; i < 100; i++)
            this->ideas[i] = Brainy.ideas[i];
        // std::cout << ideas[0] << "\n";
    }
    return (*this);
}

void    Brain::setter(std::string idea) {

    for (int i = 0; i < 100; i++)
        this->ideas[0] = idea;
}

std::string Brain::getter(void) {

    // std::cout << ideas[0] << "\n\n";
    return (ideas[0]);
}

