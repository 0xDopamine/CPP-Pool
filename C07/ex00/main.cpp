/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 22:23:15 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/04 22:29:15 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "templates.hpp"

int main() {

    int a = 2;
    int b = 3;

    std::cout << "max: " << max<int>(1, 2) << std::endl;
    std::cout << "min: " << min<int>(1, 2) << std::endl;
    swap<int>(a, b);
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "------------" << std::endl;
    float   x = 12.5f;
    float   y = -7.5f;
    std::cout << "max: " << max<float>(x, y) << std::endl;
    std::cout  << "min: " << min<float>(x, y) << std::endl;
    swap<float>(x, y);
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
}