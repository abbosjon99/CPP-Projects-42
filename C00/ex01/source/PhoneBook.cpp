/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <akeldiya@student.42warsaw.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:52:38 by akeldiya          #+#    #+#             */
/*   Updated: 2024/11/08 20:18:33 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include <iostream>

void PhoneBook::init(void)
{
	id = 0;
	isLooped = false;
}

void PhoneBook::addContact(void)
{
	if (8 == id)
	{
		id = 0;
		isLooped = true;
	}
	contacts[id].setFirstName(promptToGet("First Name:"));
	contacts[id].setLastName(promptToGet("Last Name:"));
	contacts[id].setNickName(promptToGet("Nick Name:"));
	contacts[id].setPhoneNumber(promptToGet("Phone Number:"));
	contacts[id].setSecret(promptToGet("Darkest Secret:"));
	id++;
}

void PhoneBook::searchContact(void)
{
	std::string	str;

	printContacts(id, isLooped, contacts);
	while (true)
	{
		std::cout << "Enter the index number:" << std::endl;
		std::cin >> str;
		
	}
}


