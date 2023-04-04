/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaioumy <mbaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:49:22 by mbaioumy          #+#    #+#             */
/*   Updated: 2023/04/04 18:22:52 by mbaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

float	toFloat(char num)
{
	return (num - '0');
}

bool	isOperator(char token)
{
	if (token == '+' || token == '-' || token == '*' || token == '/')
		return (true);
	return (false);
}

float	calculate(float a, float b, char op)
{
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

bool	isSafe(char token)
{
	if (!isOperator(token) && !isnumber(token))
		return (false);
	return (true);
}

int main(int argc, char **argv)
{
	RPN	postfix;

	argc = 0;
	postfix.parse(argv);
	postfix.print_result();
	return (0);
}