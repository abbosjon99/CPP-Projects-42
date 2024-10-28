/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <akeldiya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:26:38 by akeldiya          #+#    #+#             */
/*   Updated: 2024/10/28 21:04:20 by akeldiya         ###   ########.fr       */
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
	}
}
