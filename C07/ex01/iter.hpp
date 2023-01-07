/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 22:30:35 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/07 16:06:38 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T, typename B, typename C>
void   iter(T* array, B len, C (*funct)(T)) {

    for (B i = 0; i < len; i++)
        funct(array[i]);
}

template <typename T>
void    print(T x) {

    std::cout << x << std::endl;
}
