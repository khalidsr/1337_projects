/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:37:42 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/28 20:40:51 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_brain = new Brain(); 
	std::cout <<"Cat default constructor"<< std::endl;
	setType("Cat");
}

Cat::Cat(Cat const& Cat)
{
	_brain = new Brain(); 
	std::cout <<" Cat copy constructor"<< std::endl;
	*this = Cat;
}

Cat& Cat::operator=(Cat const& cat)
{
	*this->_brain =  *cat._brain;
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

Brain *Cat::getBrain()
{
	return this->_brain;
}

Cat::~Cat()
{
	delete _brain; 
	std::cout <<"Cat destructor"<< std::endl;
}
