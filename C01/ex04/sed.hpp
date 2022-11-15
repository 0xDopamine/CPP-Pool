/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:04:44 by mbaioumy          #+#    #+#             */
/*   Updated: 2022/11/15 17:04:44 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include <fstream>

class File {
    private:
        std::ifstream file;
    public:
        File(std::ifstream file);
        ~File();
        std::string read(std::ifstream file);
};
