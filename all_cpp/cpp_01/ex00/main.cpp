/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:35:21 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/25 20:19:31 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main()
{
	Zombie a("RAFA");
	Zombie *instance;
	
	a.announce();
	instance = newZombie("ROJER");
	instance->announce();
	randomChump("NOVAC");
	delete instance;
	// system("leaks BraiiiiiiinnnzzzZ");
}