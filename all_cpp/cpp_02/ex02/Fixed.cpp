/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:27:17 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/27 11:00:35 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

Fixed::Fixed():_num(0)
{
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(Fixed const& fixe)
{
	std::cout<<"Copy constructor called"<<std::endl;
	this->_num = fixe.getInt();
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

int	Fixed::getInt( void ) const
{
	return ( _num );
}

Fixed& Fixed::operator=(Fixed const& fixe)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	if (this != &fixe)
		this->_num = fixe.getInt();
	return *this;
}

bool Fixed::operator>(Fixed const &fixe)
{
	if(toFloat() > fixe.toFloat())
		return true;
	return false;
}

bool Fixed::operator<(Fixed const &fixe)
{
	if(toFloat() < fixe.toFloat())
		return true;
	return false;
}
bool Fixed::operator>=(Fixed const &fixe)
{
	if(toFloat() >= fixe.toFloat())
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

Fixed Fixed::operator*(Fixed const &fixe)
{
	return Fixed((float)(toFloat() * fixe.toFloat()));
}

Fixed Fixed::operator/(Fixed const &fixe)
{
	return Fixed(toFloat() / fixe.toFloat());
}

Fixed& Fixed::operator++(void)
{
	this->_num = _num + ( 0.00390625 * ( 1 << _bn ) );
	return ( *this );
}

Fixed&  Fixed::operator--(void)
{
	this->_num = _num - ( 0.00390625 * ( 1 << _bn ) );
	return (*this);
}

Fixed  Fixed::operator++( int )
{
	Fixed fixe(*this);

	this->_num = this->_num + ( 0.00390625 * ( 1 << _bn ) );
	return (fixe);
}

Fixed  Fixed::operator--(int)
{
	Fixed fixe(*this);
	this->_num = _num - ( 0.00390625 * ( 1 << _bn ) );
	return (fixe);
}

Fixed const& Fixed::max(Fixed const& a, Fixed const& b)
{
	if(a.toFloat() > b.toFloat())
		return a;
	return b;
}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b)
{
	if(a.toFloat() > b.toFloat())
		return b;
	return a;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if(a >= b)
		return a;
	return b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if(a >= b)
		return b;
	return a;
}

float Fixed::toFloat(void) const
{
	float f;
	f = ((float) this->_num /(1 << this->_bn));
	return f;
}

void Fixed::setFloat(float f)
{
	this->_num = roundf(f* ((1 << this->_bn)));
}

void Fixed::setInt(int n)
{
	this->_num  = (n * ( 1 << this->_bn));
}

int Fixed::toInt(void) const
{
	int nb;
	nb = this->_num / (1 << this->_bn);
	return nb;
}

std::ostream& operator<<(std::ostream& o, Fixed const & fixed)
{
	o << fixed.toFloat();
	return o;
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}