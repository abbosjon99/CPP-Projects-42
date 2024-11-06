/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <akeldiya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:26:38 by akeldiya          #+#    #+#             */
/*   Updated: 2024/11/07 00:56:08 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"
#include <iostream>

int	main(void)
{
	Contact	person;

	std::string str;
	std::cout << "Welcome to 80's PhoneBook" << std::endl;
	while (str != "EXIT")
	{
		std::cout << "Please enter a command:" << std::endl;
		std::cin >> str;
		if (str == "ADD")
		{
			std::cout << "Please enter the first name:" << std::endl;
			std::cin >> str;
			person.setFirstName(str);
			std::cout << "Please enter the last name:" << std::endl;
			std::cin >> str;
			person.setLastName(str);
		}
		else if (str != "ADD")
		{
			std::cout << person.getFirstName() << std::endl;
			std::cout << person.getLastName() << std::endl;
		}
	}
}
