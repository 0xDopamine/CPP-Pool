/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 19:41:12 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/07 02:53:47 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

int main() {

    _Array<int> nums(10);

    for (int i = 0; i < 10; i++)
        nums[i] = i;
        
    for (int i = 0; i < 10; i++)
        std::cout << nums[i] << std::endl;    
    
    
    _Array<int> num(nums);

    std::cout << num[1] << std::endl;
        return (0);
}
