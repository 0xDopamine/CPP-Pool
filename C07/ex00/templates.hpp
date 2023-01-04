/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:07:35 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/04 22:24:37 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
T max (T x, T y) {

    return (x > y) ? : y;
}

template <typename T>
T min (T x, T y) {

    return (x < y) ? : y;
}

template <typename T>
void    swap(T& x, T& y) {

    T tmp = x;
    x = y;
    y = tmp;
}
