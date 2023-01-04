/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:25:21 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/04 17:25:21 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

int main()
{
    Data        data;
    Data        *deserialized;
    uintptr_t   serialized;

    data.index = 42;
    data._str = "RTFM!";
    std::cout << std::endl;
    std::cout << "---Before---" << std::endl;
    std::cout << std::endl;
    std::cout << "index: " << data.index << std::endl;
    std::cout << "_str: " << data._str << std::endl;
    std::cout << std::endl;
    serialized = serialize(&data);
    deserialized = deserialize(serialized);
    std::cout << std::endl;
    std::cout << "---After---" << std::endl;
    std::cout << std::endl;
    std::cout << "index: " << deserialized->index << std::endl;
    std::cout << "_str: " << deserialized->_str << std::endl;
    std::cout << std::endl;
    return (0);
}