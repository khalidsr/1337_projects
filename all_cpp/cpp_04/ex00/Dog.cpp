/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:39:45 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/28 19:04:16 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout <<"Dog default constructor "<< std::endl;
	setType("Dog");
}

Dog::Dog(Dog const& Dog)
{
	*this = Dog;
	std::cout <<"Dog copy constructor"<< std::endl;
}

Dog& Dog::operator=(Dog const& Dog)
{
	this->_type = Dog.getType();
	std::cout <<"Dog copy assignment constructor"<< std::endl;
	return *this;
}

void Dog::setType(std::string type)
{
	_type = type;
}

void Dog::makeSound()const
{
	std::cout<<"ruff, ruff, ruff!"<<std::endl;
}

Dog::~Dog()
{
	std::cout <<"Dog destructor"<< std::endl;
}