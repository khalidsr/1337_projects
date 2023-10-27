/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:19:42 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/25 20:22:40 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void test(int N , std::string str)
{
	Zombie *instance;
	instance = zombieHorde(N, str);
	for (int i = 0; i < N; i++)
	{
		instance->announce();
	}
	delete [] instance;
}


int main()
{
	int N;
	std::string str;
	
	std::cout<<"Enter the number of Zombies"<<std::endl;
	std::cin >> N;
	std::cout<<"Enter the name of Zombies"<<std::endl;
	std::cin >> str;
	test(N,str);
	// system("leaks Moar_brainz!");
}