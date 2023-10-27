/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:46:44 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/27 17:18:24 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.h"

class Point
{
private:
	Fixed const _x;
	Fixed const _y;
public:
	Point();
	Point(float const x, float const y);
	Point(Point const& point);
	Point& operator=(Point const& point);
	Fixed const getX(void)const;
	Fixed const getY(void)const;
	~Point();
};

#endif