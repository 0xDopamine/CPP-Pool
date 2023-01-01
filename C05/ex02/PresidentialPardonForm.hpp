/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 20:45:55 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/01 20:49:54 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDOMFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string& name, const int& requiredGradeSign, const int& requiredGradeExecute);
        ~PresidentialPardonForm();
        virtual void    beSigned(const Bureaucrat& Buro);  
} ;

#endif