/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:59:42 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/04 17:59:42 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

int main()
{
    Base    *base;

    base = generate();
    identify(base);
    identify(*base);
    return (0);
}