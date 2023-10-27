/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 10:05:29 by sriyani           #+#    #+#             */
/*   Updated: 2023/02/01 18:16:54 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_HPP
#define Array_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
	unsigned int _n;
	T* _array;
public:
	Array<T>()
	{
		std::cout<< "Default constructor"<<std::endl;
	}
	Array<T>(unsigned int n):_n(n)
	{
		_array = new T[_n]();
		std::cout<< "Parameterized constructor"<<std::endl;
	}
	Array<T>(Array<T> const& tab):_n(tab.size())
	{
		_array = new T[tab.size()]();
		*this = tab;
		std::cout<< "copy constructor"<<std::endl;
	}
	Array<T>& operator=(Array<T> const& tab)
	{
		this->_n = tab.size();
		for(unsigned int i = 0; i < tab.size(); i++)
			this->_array[i] = tab.getArray()[i];
		std::cout<< "Copy assignement constructor"<<std::endl;
		return *this;
	}
	T& operator[](unsigned int index)const
	{
		if(index >= size())
			throw std::exception();
		return this->_array[index];
	}
	T* getArray() const
	{
		return this->_array;
	}
	unsigned int size()const
	{
		return _n;
	}
	~Array<T>()
	{
		delete [] _array;
		std::cout<< "Destructor "<<std::endl;
	}
};

#endif