/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:24:08 by sriyani           #+#    #+#             */
/*   Updated: 2023/02/01 18:28:51 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename U>
void func(U const& array)
{
	std::cout<< "array: "<<array<<std::endl;
}

int main()
{
	std::string array[] = {"novac", "nadal", "rojer","ferrer" };
	::iter( array, 4,func);
	int tab[] = {4, 34, -3, 0 };
	iter<int>(tab, 4, func);
}
