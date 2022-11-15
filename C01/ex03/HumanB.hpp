/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:30:06 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/11/14 20:30:06 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

class HumanB {
    private:
        std::string name;
        Weapon*  arm;
    public:
        void    attack(void);
        Weapon& getWeapon(void);
        void    setWeapon(Weapon& newWeapon);
        HumanB(std::string name);
        ~HumanB(void);
} ;
