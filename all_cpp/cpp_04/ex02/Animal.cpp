/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:30:48 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/13 16:24:08 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal():_type("AAnimals")
{
	std::cout <<"AAnimal default constructor"<< std::endl;
}

AAnimal::AAnimal(AAnimal const& Aanimal)
{
	std::cout <<"AAnimal copy constructor"<< std::endl;
	*this = Aanimal;
}

AAnimal& AAnimal::operator=(AAnimal const& Aanimal)
{
	this->_type = Aanimal.getType();
	std::cout <<"AAnimal copy assignment constructor"<< std::endl;
	return *this;
}

// void AAnimal::makeSound()const
// {
// 	std::cout<<"Aanimal sound"<<std::endl;
// }

std::string AAnimal::getType(void)const
{
	return _type;
}

AAnimal::~AAnimal()
{
	std::cout <<"AAnimal destructor"<< std::endl;
}