/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <akeldiya@student.42warsaw.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:52:35 by akeldiya          #+#    #+#             */
/*   Updated: 2024/11/12 21:26:57 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "../include/Contact.hpp"
# include <iostream>

class PhoneBook
{
  private:
	Contact contacts[8];
	short int id;
	bool isLooped;

  public:
	PhoneBook();
	void addContact(void);
	void searchContact(void);
};

#endif