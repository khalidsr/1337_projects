/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:37:42 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/28 19:03:51 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout <<"Cat default constructor"<< std::endl;
	setType("Cat");
}

Cat::Cat(Cat const& cat)
{
	*this = cat;
	std::cout <<" Cat copy constructor"<< std::endl;
}

Cat& Cat::operator=(Cat const& cat)
{
	this->_type = cat.getType();
	std::cout <<"Cat copy assignment constructor"<< std::endl;
	return *this;
}

void Cat::setType(std::string type)
{
	_type = type;
}

void Cat::makeSound()const
{
	std::cout<<"meow,meow,meow!"<<std::endl;
}

Cat::~Cat()
{
	std::cout <<"Cat destructor"<< std::endl;
}