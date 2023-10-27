/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:55:41 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/27 11:06:07 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"
#include "Point.h"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed w1;
	Fixed w2;
	Fixed px = point.getX();
	Fixed py = point.getY();
	Fixed ax = a.getX();
	Fixed bx = b.getX();
	Fixed cx = c.getX();
	Fixed ay = a.getY();
	Fixed by = b.getY();
	Fixed cy = c.getY();

	w1 = (ax * (cy - ay) + (py - ay)*(cx - ax) - px * (cy - ay))/((by - ay)*(cx - ax)-(bx - ax)*(cy - ay));
	if (cy != ay)
		w2 = (py - ay - (w1 * (by - ay))) / (cy - ay);
	else
	{
		w1 = (py - ay) / (by - ay);
		w2 = ((px - ax) - w1*(bx - ax))/(cx -ax);
	}
	if (w1 <= 0)
		return false;
	if (w2 <= 0)
		return false;
	if (w1 + w2 < 1)
		return true;
	return false;
}