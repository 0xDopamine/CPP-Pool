/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 22:12:32 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/12/29 19:02:51 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const std::string ideas[]);
        Brain(const Brain& Brainy);
        ~Brain();
        Brain&  operator=(const Brain& Brainy);
        void    setter(std::string idea);
        std::string getter(void);
} ;

#endif