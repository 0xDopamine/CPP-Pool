/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:49:50 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/04/04 18:30:47 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN():status(true) {}

RPN::~RPN() {}

float   RPN::toFloat(char token) {

    return (token - '0');
}

bool RPN::isOperator(char token) {

    if (token == '+' || token == '-' || token == '*' || token == '/')
		return (true);
	return (false);
}

float   RPN::calculate(float a, float b, char op) {

    if (op == '+')
		return (a + b);
	else if (op == '-')
		return (a - b);
	else if (op == '*')
		return (a * b);
	else if (op == '/')
		return (a / b);
	return (0);
}

bool	RPN::protection(char token) {

	if (isOperator(token) || isnumber(token) || isspace(token))
		return (true);
	else {
		std::cout << "Error: " << '\'' << token << '\'' << " <== Character not allowed!" << std::endl;
		status = false;
		return (false);
	}
}

void	RPN::print_result(void) {

	if (status)
		std::cout << stk.top() << std::endl;
}

void    RPN::parse(char **argv) {

	if (argv[1])
	{
		int	i = 0;
		while (argv[1][i] && protection(argv[1][i]))
		{
			if (isOperator(argv[1][i]))
			{
				a = stk.top();
				stk.pop();
				b = stk.top();
				stk.pop();
				stk.push(calculate(b, a, argv[1][i]));
			}
			else if ((argv[1][i] >= '0' && argv[1][i] <= '9'))
				stk.push(toFloat(argv[1][i]));
			i++;
		}
	}
}