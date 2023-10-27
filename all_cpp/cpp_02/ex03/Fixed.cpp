/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:48:43 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/27 17:15:41 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed(void)
{
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(int const n)
{
	std::cout<<"Int constructor called"<<std::endl;
	setInt(n);
}

Fixed::Fixed(float const f)
{
	std::cout<<"Float constructor called"<<std::endl;
	setFloat(f);
}

Fixed::Fixed(Fixed const& fixe)
{
	std::cout<<"Copy constructor called"<<std::endl;
	this->_num = fixe.getInt();
}

Fixed& Fixed::operator=(Fixed const& fixe)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	if(this != &fixe)
		this->_num = fixe.getInt();
	return *this;
}

bool Fixed::operator<(Fixed const &fixe)
{
	if(toFloat() < fixe.toFloat())
		return true;
	return false;
}
bool Fixed::operator<=(Fixed const &fixe)
{
	if(toFloat() <= fixe.toFloat())
		return true;
	return false;
}

bool Fixed::operator==(Fixed const &fixe)
{
	if(toFloat() == fixe.toFloat())
		return true;
	return false;
}

bool Fixed::operator!=(Fixed const &fixe)
{
	if(toFloat() != fixe.toFloat())
		return true;
	return false;
}

Fixed Fixed::operator+(Fixed const &fixe)
{
	return Fixed(toFloat() + fixe.toFloat());
}

Fixed Fixed::operator-(Fixed const &fixe)
{
	return Fixed(toFloat() - fixe.toFloat());
}

Fixed Fixed::operator/(Fixed const &fixe)
{
	return Fixed(toFloat() / fixe.toFloat());
}

Fixed Fixed::operator*(Fixed const &fixe)
{
	return Fixed((float)(toFloat() * fixe.toFloat()));
}

float Fixed::toFloat(void) const
{
	float f;
	f = ((float)this->_num /(1 << this->_bn));
	return f;
}


int Fixed::toInt(void) const
{
	int nb;
	nb = this->_num / (1 << this->_bn);
	return nb;
}

std::ostream& operator<<(std::ostream& o,Fixed const & fixed)
{
	o << fixed.toFloat();
	return o;
}

void Fixed::setFloat(float f)
{
	this->_num = roundf(f* ((1 << this->_bn)));
}

void Fixed::setInt(int n)
{
	this->_num  = (n * ( 1 << this->_bn));
}

int Fixed::getInt(void)const
{
	return this->_num;
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}