/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:46:41 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/27 17:18:55 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

Point::Point():_x(0),_y(0)
{
	std::cout<<"Default constructor called Point"<<std::endl;
}
Point::Point(Point const& point): _x(point._x), _y(point._y)
{

}

Point& Point::operator=(Point const& point)
{
	return *this;
}
Point::Point(float const x, float const y):_x(x),_y(y)
{
	std::cout<<"float constructor called Point"<<std::endl;
}
Point::~Point()
{
	std::cout<<"Destructor called Point"<<std::endl;
}

Fixed const Point::getX(void)const
{
	return this->_x;
}

Fixed const  Point::getY(void)const
{
	return this->_y;
}
