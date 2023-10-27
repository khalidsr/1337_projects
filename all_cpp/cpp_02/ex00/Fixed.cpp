/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:56:49 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/27 10:58:41 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed():_num(0)
{
	std::cout<< "Default constructor called" <<std::endl;
}

Fixed::Fixed(Fixed const& fixed)
{
	std::cout<< "Copy constructor called"<<std::endl;
	this->_num = fixed.getRawBits();
}

Fixed& Fixed::operator=(Fixed const& fixed)
{
	std::cout << "Copy assignment operator called"<< std::endl;
	if (this != &fixed)
		this->_num = fixed.getRawBits();
	return *this;
}

void Fixed::setRawBits(int const raw )
{
	this->_num = raw * (1 <<_bn);
}

int Fixed::getRawBits(void) const
{
	std::cout<< "getRawBits member function called"<<std::endl;
	return this->_num / (1 << _bn);
}

Fixed::~Fixed()
{
	std::cout<< "Destructor called"<<std::endl;
}