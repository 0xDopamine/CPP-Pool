/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:45:26 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/05 17:30:23 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "Classes.hpp"

Base::~Base() {};

Base*   generate(void) {

    Base    *base;

    std::srand(time(0));
    int     random = rand() % 3;
    if (random == 0)
    {
            base = new A();
            std::cout << "Base A created!" << std::endl;
    }
    if (random == 1)
    {
            base = new B();
            std::cout << "Base B created!" << std::endl;
    }
    if (random == 2)
    {
            base = new C();
            std::cout << "Base C created!" << std::endl;
    }
    return (base);
}

void    identify(Base *p) {

    A   *_aClass = dynamic_cast<A*>(p);
    if (_aClass)
        std::cout << "Its a class A object!" << std::endl;
    B   *_bClass = dynamic_cast<B*>(p);
    if (_bClass)
        std::cout << "Its a class B object!" << std::endl;
    C   *_cClass = dynamic_cast<C*>(p);
    if (_cClass)
        std::cout << "Its a class C object!" << std::endl;
}

void    identify(Base &p) {

    try
    {
        A   &_aClass = dynamic_cast<A&>(p);
        _aClass.identity();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        B   &_bClass = dynamic_cast<B&>(p);
        _bClass.identity();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        C   &_cClass = dynamic_cast<C&>(p);
        _cClass.identity();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }  
}