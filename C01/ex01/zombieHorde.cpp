/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <akeldiya@student.42warsaw.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 01:11:44 by akeldiya          #+#    #+#             */
/*   Updated: 2024/11/13 01:22:03 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    if (N <= 0)
        return NULL;

    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; ++i) {
        horde[i].setName(name);
    }

    return horde;
}
