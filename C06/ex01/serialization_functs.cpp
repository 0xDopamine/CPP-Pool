/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization_functs.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 17:21:59 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/04 17:21:59 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

uintptr_t   serialize(Data *ptr) {

    return (reinterpret_cast<uintptr_t>(ptr));
} ;

Data        *deserialize(uintptr_t raw) {

    return (reinterpret_cast<Data*>(raw));
}