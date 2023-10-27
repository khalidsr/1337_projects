/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:32:39 by sriyani           #+#    #+#             */
/*   Updated: 2023/02/02 18:25:56 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include<iostream>
#include <exception>

template <typename T>
unsigned int	easyfind(T c, int num)
{
	typename T::iterator it;
	it = std::find(c.begin() ,c.end(), num);
	try
	{
		if (it != c.end())
			return (std::distance(c.begin(), it));
		else
			throw std::exception();
	}
	catch(const std::exception& e)
	{
		std::cerr<<"Element not found in c: " << e.what() << '\n';
	}
	return *it;
}

#endif