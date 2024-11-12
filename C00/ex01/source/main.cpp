/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <akeldiya@student.42warsaw.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:26:38 by akeldiya          #+#    #+#             */
/*   Updated: 2024/11/12 21:39:55 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"
#include "../include/PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook	pb;

	std::string str;
	std::cout << "Welcome to 80's PhoneBook" << std::endl;
	while (str != "EXIT")
	{
		std::cout << "Please enter a command:" << std::endl;
		std::cin >> str;
		if (str == "ADD")
			pb.addContact();
		else if (str == "SEARCH")
			pb.searchContact();
		else if (str != "EXIT")
		{
			std::cout << "List of valid commands:" << std::endl;
			std::cout << "ADD | SEARCH | EXIT" << std::endl;
		}
	}
}
