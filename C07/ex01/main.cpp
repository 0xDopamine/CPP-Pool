/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 02:45:03 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/05 02:45:03 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {

    int array[] = {1, 2, 3, 4, 5};
    // std::string str = "Hello";

    iter(array, 5, &print<int>);
    // iter(array, 5, &print<std::string>);
}