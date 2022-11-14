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

#include "Weapon.hpp"

class HumanA {
    private:
        std::string name;
        Weapon  &arm;
    public:
        void    attack(void);
        Weapon& getWeapon(void);
        HumanA(std::string name, Weapon &arm);
        ~HumanA(void);
} ;
