/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:22:17 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/25 20:18:40 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Default constructor called"<< std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name<< ": BraiiiiiiinnnzzzZ..."<< std::endl;	
}

void	Zombie::setzombie(std::string name)
{
	_name = name;
}

std::string	Zombie::getzombie(void)
{
	return _name;
}

Zombie::~Zombie(void)
{	
	std::cout << _name << ": Destructor called"<< std::endl;
}