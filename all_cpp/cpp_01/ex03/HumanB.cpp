/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:02:35 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/25 20:48:43 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB(std::string name)
{
	std::cout<<"HumanB constructor"<<std::endl;
	_name = name;
	_weapon = NULL;
}

void HumanB::attack(void)
{
	std::cout<< _name;
	if (_weapon)
		std::cout << " attacks with their " << _weapon->getType()<<std::endl;
	else
		std::cout << " has no weapon"<<std::endl;

}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

void HumanB::getWeapon(void)
{
	std::cout << _weapon->getType() << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout<<"HumanB destructor"<<std::endl;
}