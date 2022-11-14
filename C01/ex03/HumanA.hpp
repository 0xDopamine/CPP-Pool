/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:02:06 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/11/14 20:02:06 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon  arm;
    public:
        void    attack(void);
        HumanA(std::string name, Weapon weapon);
        ~HumanA(void);
} ;

#endif