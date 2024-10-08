/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:02:56 by beroy             #+#    #+#             */
/*   Updated: 2024/10/10 13:14:59 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*zombie = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombie[i].set_name(name);
	return (zombie);
}