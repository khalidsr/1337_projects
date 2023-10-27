/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:07:53 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/31 18:43:34 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

int main( )
{
	Data *data = new Data;
	Data *a;
	data->num = 43;
	uintptr_t nb;
	uintptr_t l = 777;
	a = deserialize(l);
	l = serialize(a);
	std::cout<<": "<<l <<std::endl;
	std::cout<<"-----------------" <<std::endl;
	nb = serialize(data);
	a = deserialize(nb);
	std::cout<<"a->num : "<< a->num <<std::endl;
	if (a == data)
		std::cout<< a <<" equal "<< data <<std::endl;
	else
		std::cout<< a << " not equal "<< data << std::endl;
	delete data;
	// system("leaks Serialization");
}