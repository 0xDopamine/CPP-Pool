/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 20:45:55 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/01/02 17:32:41 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDOMFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& P_form);
        ~PresidentialPardonForm();
        PresidentialPardonForm& operator=(const PresidentialPardonForm& P_form);
        virtual void    beSigned(const Bureaucrat& Buro);
        void            execute(const std::string target) const;
} ;

#endif