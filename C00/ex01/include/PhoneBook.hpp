/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <akeldiya@student.42warsaw.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:52:35 by akeldiya          #+#    #+#             */
/*   Updated: 2024/11/08 20:14:12 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "../include/Contact.hpp"
# include <iostream>

std::string promptToGet(std::string varname);
void	printContacts(int id, bool isLooped, Contact *contacts);

class PhoneBook
{
  private:
	Contact contacts[8];
	short int id;
	bool isLooped;

  public:
	void addContact(void);
	void searchContact(void);
	void init(void)
	{
		id = 0;
		isLooped = false;
	}
};

#endif