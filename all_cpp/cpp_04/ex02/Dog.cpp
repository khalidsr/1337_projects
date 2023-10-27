/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:39:45 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/28 20:50:47 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_brain = new Brain();
	std::cout <<"Dog default constructor "<< std::endl;
	setType("Dog");
}

Dog::Dog(Dog const& Dog)
{
	this->_brain = new Brain();
	std::cout <<"Dog copy constructor"<< std::endl;
	*this = Dog;
}

Dog& Dog::operator=(Dog const& dog)
{
	this->_brain = dog._brain;
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
	delete this->_brain;
	std::cout <<"Dog destructor"<< std::endl;
}
Brain *Dog::getBrain()
{
	return this->_brain;
}
