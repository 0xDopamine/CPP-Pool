/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 22:30:35 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/04 22:31:37 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void   iter(T* array, int len, void (*funct)(T)) {

    for (int i = 0; i < len; i++) {

        funct(array[i]);
    }
}

template <typename T>
void    print(T x) {

    std::cout << x << std::endl;
}
