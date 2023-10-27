/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:25:51 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/25 21:22:01 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl(void)
{
	
}

void Harl::debug( void )
{
	std::cout<< "[ DEBUG ]"<<std::endl;
	std::cout<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."<<std::endl;
	std::cout<< "I really do!"<<std::endl;
	std::cout<<std::endl;
}

void Harl::info( void )
{
	std::cout<< "[ INFO ]"<<std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."<<std::endl;
	std::cout<<"You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
	std::cout<<std::endl;
}

void Harl::warning( void )
{
	std::cout<<"[ WARNING ]"<<std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."<<std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month."<<std::endl;
	std::cout<<std::endl;
}

void Harl::error( void )
{
	std::cout<<"[ ERROR ]" <<std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." <<std::endl;
	std::cout<<std::endl;
}

int Harl::chose_harl(std::string str)
{
	int  i;
	std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	i = 0;
	while(str.compare(arr[i]) && i < 4)
		i++;
	return (i);
}

void Harl::complain(std::string level)
{
	int index;
	index = chose_harl(level);
	switch (index)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
	}
}
int Harl::exit_program(void)
{
	exit(0);
	return(0);
}

Harl::~Harl()
{

}