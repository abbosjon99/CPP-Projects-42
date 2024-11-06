/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <akeldiya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 20:52:41 by akeldiya          #+#    #+#             */
/*   Updated: 2024/11/07 00:57:36 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"
#include <iostream>

std::string Contact::getFirstName(void)
{
	std::string str;
	str = first_name;
	return (str);
}
std::string Contact::getLastName(void)
{
	std::string str;
	str = last_name;
	return (str);
}
std::string Contact::getNickName(void)
{
	std::string str;
	str = nick_name;
	return (str);
}
std::string Contact::getSecret(void)
{
	std::string str;
	str = secret;
	return (str);
}
std::string Contact::getPhoneNumber(void)
{
	std::string str;
	str = phone_number;
	return (str);
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
