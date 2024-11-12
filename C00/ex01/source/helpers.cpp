/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <akeldiya@student.42warsaw.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 08:46:07 by akeldiya          #+#    #+#             */
/*   Updated: 2024/11/12 22:03:34 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/helpers.hpp"
#include <sstream>

void	printHeader(void)
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|Index     |First Name|Last Name |Nick Name |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

std::string promptToGet(std::string varname, bool isNumber)
{
	std::string value;
	while (true)
	{
		std::cout << "Please enter the " << varname << std::endl;
		std::cin >> value;
		if (value.length() == 0)
		{
			std::cout << "Field cannot be empty!!!" << std::endl;
			continue ;
		}
		if (isNumber)
		{
			if (value[0] == '-' || value[0] == '+')
				value = value.substr(1);
			for (long unsigned int i = 0; i < value.length(); i++)
			{
				if (!isdigit(value[i]))
				{
					std::cout << "Please enter a valid number!!!" << std::endl;
					continue ;
				}
			}
		}
		return (value);
	}
}

void	printValue(std::string value)
{
	int	i;
	int	len;

	len = value.length();
	i = 0;
	std::cout << "|";
	if (len <= 10)
	{
		std::cout << value;
		while (len < 10)
		{
			std::cout << " ";
			len++;
		}
	}
	else
	{
		while (i < 9)
		{
			std::cout << value[i];
			i++;
		}
		std::cout << ".";
	}
}

std::string intToString(int number)
{
	std::stringstream ss;
	ss << number;
	return (ss.str());
}