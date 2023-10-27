/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:09:20 by sriyani           #+#    #+#             */
/*   Updated: 2023/02/02 18:20:12 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include<iostream>
#include<stack>
#include<deque>
#include <list>

template<typename T, class Containers = std::deque<T> >

class MutantStack : public std::stack<T, Containers>
{

private:
	std::stack<T> _Mstack;
public:
	MutantStack<T>()
	{
		std::cout<<"MutantStack default constructor"<<std::endl;
	}
	MutantStack<T>(MutantStack<T> const& stack)
	{
		std::cout<<"MutantStack copy constaructor"<<std::endl;
		*this = stack;
	}
	MutantStack<T>& operator=(MutantStack<T> const& stack)
	{
		this->_Mstack = stack.getStack();
		std::cout<<"MutantStack copy assignement constructor"<<std::endl;
		return *this;
	}
	~MutantStack<T>()
	{
		std::cout<<"MutantStack destructor"<<std::endl;
	}
	std::stack<T> getStack()
	{
		return this->_Mstack;
	}
	typedef typename Containers::iterator iterator;

	iterator begin()
	{
		return  this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}
};

#endif