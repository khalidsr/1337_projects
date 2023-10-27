/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:57:54 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/10 15:50:52 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"

DiamondTrap::DiamondTrap()
{
	std::cout<<"DiamondTrap Default constructor called"<<std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :_name(name)
{
	ClapTrap::_Hit_points = 100;
	ClapTrap::_Energy_points = 50;
	ClapTrap::_Attack_damage = 30;
	ClapTrap::_name = name + "_clap_name";
	std::cout<<"DiamondTrap constructor called"<<std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& diamond)
{
	std::cout<<"DiamondTrap Copy constructor called"<<std::endl;
	*this = diamond;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& diamong)
{
	std::cout<<"DiamondTrap Copy assignment operator called"<<std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout<<"DiamondTrap Destructor called"<<std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << this->_name<<std::endl;
	std::cout << ClapTrap::_name<<std::endl;
}
void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
