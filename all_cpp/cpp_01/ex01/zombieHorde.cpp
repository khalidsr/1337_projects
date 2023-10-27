/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:24:51 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/25 20:17:01 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
	Zombie* instance;
	int		i;

	i = 0;
	instance  = new Zombie[N];
	while(i < N)
	{
		instance[i].setzombie(name);
		i++;
	}
	return instance;
}