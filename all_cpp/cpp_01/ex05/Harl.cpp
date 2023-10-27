/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 18:46:30 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/25 21:20:03 by sriyani          ###   ########.fr       */
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
}

int Harl::is_debug(void)
{
	debug();
	return (0);
}

void Harl::info( void )
{
	std::cout<< "[ INFO ]"<<std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money."<<std::endl;
	std::cout<<"You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}

int Harl::is_info(void)
{
	info();
	return (0);
}

void Harl::warning( void )
{
	std::cout<<"[ WARNING ]"<<std::endl;
	std::cout << "I think I deserve to have some extra bacon for free."<<std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

int Harl::is_warning(void)
{
	warning();
	return (0);
}

void Harl::error( void )
{
	std::cout<<"[ ERROR ]" <<std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." <<std::endl;
}

int Harl::is_error(void)
{
	error();
	return (0);
}
void Harl::func(int index)
{
	index == 0 && is_debug();
	index == 1 && is_info();
	index == 2 && is_warning();
	index == 3 && is_error();
}

void Harl::complain(std::string level)
{
	void (Harl::*pmf)(int);
	Harl instance;
	int  i;
	pmf = &Harl::func;
	std::string arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	i = 0;
	while(i < 4)
	{
		if(!level.compare(arr[i]))
		{
			(instance.*pmf)(i);
			return ;
		}
		i++;
	}
	std::cout << "NOT VALID PARAMETRE "<<std::endl;
}

Harl::~Harl()
{
}