/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:02:59 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/10 17:02:16 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

FragTrap::FragTrap()
{
	std::cout<<"FragTrap Default constructor called"<<std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout<<"FragTrap constructor called"<<std::endl;
}
FragTrap::FragTrap(FragTrap const& frag)
{
	std::cout<<"FragTrap Copy constructor called"<<std::endl;
	*this = frag;
}
FragTrap& FragTrap::operator=(FragTrap const& frag)
{
	std::cout<<"FragTrap Copy assignment operator called"<<std::endl;
	return *this;
}
FragTrap::~FragTrap()
{
	std::cout<<"FragTrap Destructor called"<<std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout<<"HighFivesGuys "<<std::endl;
}

void FragTrap::attack(const std::string& target)
{
	
	if (this->_Hit_points && this->_Energy_points)
	{
		std::cout<< "FragTrap "<< this->_name<< " attacks "<< target<< ", causing "<< this->_Attack_damage << " points of damage! " << std::endl;
		this->_Energy_points--;
	}
	else
		std::cout<<"FragTrap "<< this->_name <<" can’t do anything ."<<std::endl;
}
