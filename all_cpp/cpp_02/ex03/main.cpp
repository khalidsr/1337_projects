/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 11:46:05 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/07 21:18:11 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"
#include "Fixed.h"

int main()
{
	Point p(5.8, 2.1);
	Point const a(8, 5);
	Point const b(3 ,2);
	Point const c(8, 2);
	if (bsp(a, b, c,p))
		std::cout<<"Point is inside of the triangle"<<std::endl;
	else
		std::cout<<"Point is not inside of the triangle"<<std::endl;
	return (0);
}