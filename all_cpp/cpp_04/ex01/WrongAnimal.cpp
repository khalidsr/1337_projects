/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:18:43 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/28 20:31:21 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	std::cout <<"WrongAnimal default constructor"<< std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal const& wrong)
{
	std::cout <<"WrongAnimal copy constructor"<< std::endl;
	*this = wrong;
}
WrongAnimal& WrongAnimal::operator=(WrongAnimal const& wrong)
{
	this->_type = wrong.getType() ;
	std::cout <<"WrongAnimal copy assignment constructor"<< std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout <<"WrongAnimal destructor"<< std::endl;
}


void WrongAnimal::makeSound()const
{
	std::cout<<"WrongAnimal sound"<<std::endl;
}

std::string WrongAnimal::getType(void)const
{
	return _type;
}