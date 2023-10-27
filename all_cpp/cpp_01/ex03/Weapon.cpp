/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:59:42 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/25 20:40:05 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"


Weapon::Weapon(std::string name) 
{
	std::cout<<"Weapon constructor"<<std::endl;
	setType(name);
}
void Weapon::setType(std::string name)
{
	this->_type = name;
}

 const std::string&  Weapon::getType(void) 
{
	return (this->_type);
}

Weapon::~Weapon(void)
{
	std::cout<<"Weapon destructor"<<std::endl;
}