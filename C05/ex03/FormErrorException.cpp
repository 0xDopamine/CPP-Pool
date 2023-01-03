/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FormErrorException.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 01:29:17 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/03 01:29:17 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FormErrorException.hpp"

const char*     FormErrorException::what() const throw() {

    return ("The form could not be signed!");
}