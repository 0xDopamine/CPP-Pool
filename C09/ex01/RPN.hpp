/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:49:59 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/05/20 16:39:24 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <iostream>
#include <sstream>


class RPN {

    private:
        std::stack<float>   stk;
        float               a, b;
        bool                status;
        char                *expression;
    public:
        RPN();
        ~RPN();
        float   toFloat(char token);
        bool    isOperator(char token);
        float   calculate(float a, float b, char op);
        void    parse(int argc, char **argv);
        bool    protection(char token);
        void    print_result(void);
        bool    op_count(char *expression);
} ;

#endif