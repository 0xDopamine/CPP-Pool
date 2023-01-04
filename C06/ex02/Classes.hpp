/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:43:34 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/04 19:28:06 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES_HPP
#define CLASSES_HPP

#include "Base.hpp"

class A: public Base {

    public:
        A() ;
        void    identity();
} ;

class B: public Base {

    public:
        B();
        void    identity();
} ;

class C: public Base {

    public:
        C(); 
        void    identity();
} ;

#endif