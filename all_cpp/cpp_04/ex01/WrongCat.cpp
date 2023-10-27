/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:30:42 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/28 20:31:55 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout <<"WrongCat default constructor"<< std::endl;
	setType("WrongCat");
}

WrongCat::WrongCat(WrongCat const& WrongCat)
{
	std::cout <<" WrongCat copy constructor"<< std::endl;
	*this = WrongCat;
}

WrongCat& WrongCat::operator=(WrongCat const& WrongCat)
{
	this->_type = WrongCat.getType();
	std::cout <<"WrongCat copy assignment constructor"<< std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout <<"WrongCat destructor"<< std::endl;
}

void WrongCat::setType(std::string type)
{
	_type = type;
}

void WrongCat::makeSound()const
{
	std::cout<<"Wrong sound of Cat"<<std::endl;
}
