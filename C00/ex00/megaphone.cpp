/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <akeldiya@student.42warsaw.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 00:35:28 by akeldiya          #+#    #+#             */
/*   Updated: 2024/10/28 00:44:16 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	j = 1;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (argv[j])
		{
			i = 0;
			while (argv[j][i])
			{
				std::cout << (char)std::toupper(argv[j][i]);
				i++;
			}
			j++;
		}
	}
	std::cout << std::endl;
	return (0);
}
