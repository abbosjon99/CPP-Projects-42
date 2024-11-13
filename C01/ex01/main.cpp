/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <akeldiya@student.42warsaw.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 00:35:28 by akeldiya          #+#    #+#             */
/*   Updated: 2024/11/13 01:26:17 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie	*horde;

	int numZombies = 5;
	horde = zombieHorde(numZombies, "HordeZombie");
	if (horde)
	{
		for (int i = 0; i < numZombies; ++i)
		{
			horde[i].announce();
		}
	}
	delete[] horde;
	return (0);
}
