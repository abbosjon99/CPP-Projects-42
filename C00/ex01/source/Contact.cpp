/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <akeldiya@student.42warsaw.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:52:41 by akeldiya          #+#    #+#             */
/*   Updated: 2024/11/12 17:44:54 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

std::string Contact::getFirstName(void)
{
	return (first_name);
}
std::string Contact::getLastName(void)
{
	return (last_name);
}
std::string Contact::getNickName(void)
{
	return (nick_name);
}
std::string Contact::getSecret(void)
{
	return (secret);
}
std::string Contact::getPhoneNumber(void)
{
	return (phone_number);
}

void Contact::setFirstName(std::string str)
{
	first_name = str;
}
void Contact::setLastName(std::string str)
{
	last_name = str;
}
void Contact::setNickName(std::string str)
{
	nick_name = str;
}
void Contact::setSecret(std::string str)
{
	secret = str;
}
void Contact::setPhoneNumber(std::string str)
{
	phone_number = str;
}
