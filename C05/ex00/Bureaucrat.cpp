/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 18:06:21 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/31 21:14:04 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("default"), grade(1) {
    
    std::cout << "Bureaucrat default constructor called" << std::endl;
} ;

Bureaucrat::Bureaucrat(const std::string name, int const grade): name(name), grade(grade) {

    std::cout << "Bureaucrat constructor called" << std::endl;
} ;

Bureaucrat::~Bureaucrat() {

    std::cout << "Bureaucrat destructor called" << std::endl;
} ;

std::string Bureaucrat::getName() const {

    return (name);
} ;

Bureaucrat& Bureaucrat::operator++( void ) {

    this->grade--;
    return (*this);
}

Bureaucrat& Bureaucrat::operator--( void ) {

    this->grade++;
    return (*this);
}

int         Bureaucrat::getGrade() const {

    return (grade);
} ;

void        Bureaucrat::increment(int& grade) {

    grade++;
} ;

void    Bureaucrat::decrement(int& grade) {

    grade--;
} ;