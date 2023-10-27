/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 11:05:40 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/27 19:39:07 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap()
{
	std::cout<<"Default constructor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string name):_Name(name),_Hit_points(10),_Energy_points(10),_Attack_damage(0)
{
	std::cout<<"constructor called"<<std::endl;
}
ClapTrap::ClapTrap(ClapTrap const& clap)
{
	std::cout<<"Copy constructor called"<<std::endl;
	this->_Name = clap.getName();
	this->_Hit_points = clap.getHit_points();
	this->_Energy_points = clap.getEnergy_points();
 	this->_Attack_damage = clap.getAttack_damage();
}

ClapTrap& ClapTrap::operator=(ClapTrap const& clap)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	this->_Name = clap.getName();
	this->_Hit_points = clap.getHit_points();
	this->_Energy_points = clap.getEnergy_points();
 	this->_Attack_damage = clap.getAttack_damage();
	return *this;
}


void ClapTrap::attack(const std::string& target)
{
	
	if (this->_Hit_points && this->_Energy_points)
	{
		std::cout<< "ClapTrap "<< this->_Name<<" attacks "<< target<< ", causing "<< this->_Attack_damage << " points of damage! " << std::endl;
		this->_Energy_points--;
	}
	else
		std::cout<<"ClapTrap "<< this->_Name <<" can’t do anything ."<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_Hit_points)
	{
		this->_Hit_points -=amount;
		if (this->_Hit_points < 0)
			this->_Hit_points = 0;
		std::cout<<"ClapTrap "<< this->_Name <<" take a damage "<< this->_Hit_points<< " Hit points"<<std::endl;
	}
	else	
		std::cout<<"ClapTrap "<< this->_Name <<" can’t do anything. " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Hit_points && this->_Energy_points)
	{
		std::cout<< "ClapTrap "<< this->_Name<< " Repaired." << std::endl;
		this->_Hit_points += amount;
		this->_Energy_points--;
	}
	else
		std::cout<<"ClapTrap "<< this->_Name <<" can’t do anything. "<<std::endl;
	
}
std::string ClapTrap::getName()const
{
	return this->_Name;
}

unsigned int ClapTrap::getHit_points()const
{
	return this->_Hit_points;
}

unsigned int ClapTrap::getEnergy_points()const
{
	return this->_Energy_points;
}

unsigned int ClapTrap:: getAttack_damage() const
{
	return this->_Attack_damage;
}

ClapTrap::~ClapTrap()
{
	std::cout<<"Destructor called"<<std::endl;
}