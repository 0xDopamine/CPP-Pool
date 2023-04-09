/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:49:50 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/04/09 21:00:32 by mbaioumy         ###   ########.fr       */
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

bool	RPN::op_count(char *expression) {
	
	int operators = 0;
	int	operands = 0;
	for (int i = 0; expression[i]; i++) {
		
		if (isnumber(expression[i]))
			operands++;
		else if (isOperator(expression[i]))
			operators++;
	}
	if (operands == operators + 1)
		return (true);
	std::cout << "Error: " << "'" << expression << "'" << " <== wrong expression!" << std::endl;
	return (false);
}

void	RPN::print_result(void) {

	if (status && stk.size() == 1)
		std::cout << stk.top() << std::endl;
	else if (stk.size() > 1)
		std::cout << "Error: " << "'" << expression << "'" << " <== wrong expression!" << std::endl;
}

void    RPN::parse(int argc, char **argv) {

	if (argc == 2)
	{
		expression = argv[1];
		int	i = 0;
		status = op_count(expression);
		while (status && expression[i] && protection(expression[i]))
		{
			if (isOperator(expression[i]) && stk.size() > 1)
			{
				b = stk.top();
				stk.pop();
				a = stk.top();
				stk.pop();
				stk.push(calculate(a, b, expression[i]));
			}
			else if ((expression[i] >= '0' && expression[i] <= '9'))
				stk.push(toFloat(expression[i]));
			i++;
		}
	}
	else
	{
		status = false;
		std::cout << "Error: arguments number is wrong" << std::endl;
	}
}