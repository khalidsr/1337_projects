/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:24:56 by sriyani           #+#    #+#             */
/*   Updated: 2023/02/01 11:33:52 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T >
void iter(T const * arr, int len, void (*func)(T const&))
{	
	for (int i = 0; i < len; i++)
	{
		func(arr[i]);
	}
}

#endif