/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beroy <beroy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:53:28 by beroy             #+#    #+#             */
/*   Updated: 2024/10/10 13:03:19 by beroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;
	int N = 8;

	zombie = zombieHorde(N, "Kaan");
	for (int i = 0; i < N; i++)
		zombie[i].announce();
	delete []zombie;
}
