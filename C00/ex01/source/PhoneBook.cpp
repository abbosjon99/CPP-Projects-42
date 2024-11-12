/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <akeldiya@student.42warsaw.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:52:38 by akeldiya          #+#    #+#             */
/*   Updated: 2024/11/12 22:02:40 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"
#include "../include/helpers.hpp"
#include <iostream>

// Default constructor to initialize the PhoneBook object
PhoneBook::PhoneBook() : id(0), isLooped(false)
{
}

void PhoneBook::addContact(void)
{
	if (id == 8) // Reset id and set isLooped when reaching the maximum
	{
		id = 0;
		isLooped = true;
	}
	contacts[id].setFirstName(promptToGet("First Name:", false));
	contacts[id].setLastName(promptToGet("Last Name:", false));
	contacts[id].setNickName(promptToGet("Nick Name:", false));
	contacts[id].setPhoneNumber(promptToGet("Phone Number:", true));
	contacts[id].setSecret(promptToGet("Darkest Secret:", false));
	id++;
}

static void	printContacts(int id, bool isLooped, Contact *contacts)
{
	int	totalContacts;

	printHeader();
	totalContacts = isLooped ? 8 : id;
	for (int i = 0; i < totalContacts; ++i)
	{
		printValue(intToString(i + 1));
		printValue(contacts[i].getFirstName());
		printValue(contacts[i].getLastName());
		printValue(contacts[i].getNickName());
		std::cout << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
}

static void	printContact(int index, Contact *contacts)
{
	std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Nick Name: " << contacts[index].getNickName() << std::endl;
	std::cout << "Phone Number: +" << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].getSecret() << std::endl;
}

void PhoneBook::searchContact(void)
{
	int	maxIndex;

	std::string input;
	if (id == 0 && !isLooped)
	{
		std::cout << "No contacts available to display." << std::endl;
		return ;
	}
	maxIndex = isLooped ? 7 : id - 1;
	printContacts(id, isLooped, contacts);
	while (true)
	{
		std::cout << "Enter the index number of the contact you want to display: ";
		std::cin >> input;
		// Check for non-digit characters or length issues
		if (input.length() != 1 || input[0] < '1' || input[0] > ('1'
				+ maxIndex))
		{
			std::cout << "Invalid index number! Enter a number between 1 and " << maxIndex
				+ 1 << "." << std::endl;
			continue ;
		}
		else
		{
			printContact(input[0] - '1', contacts);
			break ;
		}
	}
}
