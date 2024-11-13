/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <akeldiya@student.42warsaw.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:16:58 by akeldiya          #+#    #+#             */
/*   Updated: 2024/11/13 15:21:39 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl
	<< std::endl;
}

void Harl::_info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!" << std::endl
	<<	"If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void Harl::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain(std::string level) {
	int i = 0;
    const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (level != levels[i] && i < 4)
		i++;
    switch (i)
	{
	case 0:
		Harl::_debug();
		Harl::_info();
		Harl::_warning();
		Harl::_error();
		break;
	case 1:
		Harl::_info();
		Harl::_warning();
		Harl::_error();
		break;
	case 2:
		Harl::_warning();
		Harl::_error();
		break;
	case 3:
		Harl::_error();
		break;
	default:
		std::cerr << " [ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}
