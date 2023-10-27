/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 19:26:49 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/09 15:14:56 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"

ScavTrap::ScavTrap()
{
	std::cout<<"ScavTrap Default constructor called"<<std::endl;
}

ScavTrap::ScavTrap(std::string name) :ClapTrap(name)
{
	std::cout<<"ScavTrap  constructor called"<<std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& scav)
{
	std::cout<<"ScavTrap Copy constructor called"<<std::endl;
	*this = scav;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& scav)
{
	std::cout<<"ScavTrap Copy assignment operator called"<<std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout<<"ScavTrap Destructor called"<<std::endl;
}

void ScavTrap::guardGate()
{
	std::cout<<"ScavTrap is now in Gatekeeper mode."<<std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_Hit_points && this->_Energy_points)
	{
		std::cout<< "ScavTrap "<< this->_Name<< " attacks "<< target<< ", causing "<< this->_Attack_damage << " points of damage! " << std::endl;
		this->_Energy_points--;
	}
	else
		std::cout<<"ScavTrap "<< this->_Name <<" can’t do anything ."<<std::endl;
}