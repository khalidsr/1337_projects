/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:17:58 by sriyani           #+#    #+#             */
/*   Updated: 2023/02/01 10:15:19 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T >
void swap(T & a, T & b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename U >
U min(U a,U b)
{
	if (a > b)
		return b;
	return a;
}

template <typename V >
V max(V a,V b)
{
	if (a > b)
		return a;
	return b;
}

#endif