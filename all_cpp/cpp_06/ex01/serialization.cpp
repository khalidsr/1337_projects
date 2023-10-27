/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:02:05 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/31 18:42:53 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

uintptr_t serialize(Data* ptr)
{
	uintptr_t num;
	num = reinterpret_cast<uintptr_t>(ptr);
	return num;
}

Data* deserialize(uintptr_t raw)
{
	Data* data;
	data = reinterpret_cast<Data*>(raw);
	return data;
}