/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:43:39 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/31 18:49:32 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
}

Base * generate(void)
{
	Base *base;
	A *a;
	B *b;
	C *c;
	std::time_t t = std::time(0);
	std::time_t time = t % 3;
	switch (time)
	{
		case 0:
				a = new A;
				base = dynamic_cast<Base*>(a);
				break;
		case 1:
				b = new B;
				base = dynamic_cast<Base*>(b);
				break;
		case 2:
				c = new C;
				base = dynamic_cast<Base*>(c);
				break;
	}
	return base;
}

void identify(Base* p)
{
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);
	if (a)
		std::cout<< "the type of the object pointed by p is *: A" <<std::endl;
	if (b)
		std::cout<< "the type of the object pointed by p is *: B" <<std::endl;
	if (c)
		std::cout<< "the type of the object pointed by p is *: C" <<std::endl;
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout<<"the type of the object pointed by p is &: A"<<std::endl;
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << "A is not the type of the object pointed by p &:" << e.what() << std::endl;
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout<<"the type of the object pointed by p is &: B"<<std::endl;
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << "B is not the type of the object pointed by p &:" << e.what() << std::endl;
	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout<<"the type of the object pointed by p is &: C"<<std::endl;
	}
	catch(const std::bad_cast& e)
	{
		std::cerr << "C is not the type of the object pointed by p &:" << e.what() << std::endl;
	}
}