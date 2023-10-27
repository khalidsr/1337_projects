/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:30:48 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/28 19:03:36 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():_type("Animals")
{
	std::cout <<"Animal default constructor"<< std::endl;
}

Animal::Animal(Animal const& animal)
{
	std::cout <<"Animal copy constructor"<< std::endl;
	*this = animal;
}

Animal& Animal::operator=(Animal const& animal)
{
	this->_type = animal.getType();
	std::cout <<"Animal copy assignment constructor"<< std::endl;
	return *this;
}

void Animal::makeSound()const
{
	std::cout<<"animal sound"<<std::endl;
}

std::string Animal::getType(void)const
{
	return _type;
}

Animal::~Animal()
{
	std::cout <<"Animal destructor"<< std::endl;
}
