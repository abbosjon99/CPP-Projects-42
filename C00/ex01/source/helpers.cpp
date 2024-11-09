/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <akeldiya@student.42warsaw.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 08:46:07 by akeldiya          #+#    #+#             */
/*   Updated: 2024/11/08 10:01:46 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include <iostream>
#include <string>
#include <sstream>

std::string promptToGet(std::string varname)
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
		return (value);
	}
}

static void	printHeader(void)
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|Index     |First Name|Last Name |Nick Name |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

static void	printValue(std::string value)
{
	int	i;
	int len;

	len = value.length();
	i = 0;
	std::cout << "|";
	if (len <= 10)
	{
		std::cout << value;
		while(len < 10)
		{
			std::cout << " ";
			len ++;
		}
	}
	else
	{
		while(i < 9)
		{
			std::cout << value[i];
			i ++;
		}
		std::cout << ".";
	}
}

static std::string intToString(int number) {
    std::stringstream ss;
    ss << number;
    return ss.str();
}

void printContacts(int id, bool isLooped, Contact *contacts)
{
	int	i;

	i = 0;
	printHeader();
	if (isLooped)
		id = 8;
	if (0 != id)
	{
		while (i < id)
		{
			printValue(intToString(i));
			printValue(contacts[i].getFirstName());
			printValue(contacts[i].getLastName());
			printValue(contacts[i].getNickName());
			std::cout << "|" << std::endl;
			std::cout << "---------------------------------------------" << std::endl;
			i++;
		}
	}
}
