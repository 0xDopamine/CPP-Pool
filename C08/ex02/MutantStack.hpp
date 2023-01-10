/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:58:51 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/10 17:14:10 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T>

class MutantStack: public std::stack< T, std::deque<T> > {

    public:
        typedef typename std::deque<T>::iterator iterator;
        MutantStack(): std::stack<T, std::deque<T> >() { };
        MutantStack(const MutantStack& ms): std::stack<T, std::deque<T> >(ms) { };
        ~MutantStack() {};
        MutantStack& operator=(const MutantStack& ms) {
            
            if (this != &ms)
                this->c = ms.c;
        };
                        
        iterator    begin() {

            return (this->c.begin());
        };
        iterator    end() {
            
            return (this->c.end());
        }; 
} ;

#endif