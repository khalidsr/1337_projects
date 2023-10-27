/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 16:00:01 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/25 20:51:17 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) :_weapon(weapon)
{
	std::cout<<"HumanA constructor"<<std::endl;
	_name = name;
}

void HumanA::attack(void)
{
	std::cout<<_name << " attacks with their ";
	std::cout << _weapon.getType()<< std::endl;
}

HumanA::~HumanA(void)
{
	std::cout<<"HumanA destructor"<<std::endl;
}