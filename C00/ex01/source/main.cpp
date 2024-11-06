/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <akeldiya@student.42warsaw.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:26:38 by akeldiya          #+#    #+#             */
/*   Updated: 2024/10/29 09:46:58 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str;
	std::cout << "Welcome to 80's PhoneBook" << std::endl;
	while (str != "EXIT")
	{
		std::cout << "Please enter a command:" << std::endl;
		std::cin >> str;
		if (str == "SEARCH")
			std::cout << "No contacts added yet!" << std::endl;
		else if (str == "ADD")
			std::cout << "No models created yet!" << std::endl;
	}
}
