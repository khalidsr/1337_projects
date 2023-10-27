/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:27:27 by sriyani           #+#    #+#             */
/*   Updated: 2023/02/02 17:50:40 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	std::cout<< "Span Default constructor"<<std::endl;
}
Span::Span(unsigned int n):N(n)
{
	this->_tab.reserve(N);
	std::cout<< "Span parametrized constructor"<<std::endl;
}
Span::Span(Span const& span)
{
	std::cout<< "Span copy constructor"<<std::endl;
	*this = span;
}
Span& Span::operator=(Span const& span)
{
	std::cout<< "Span copy assignement constructor"<< std::endl;
	this->N = span.getN();
	return *this;
}
unsigned int Span::getN()const
{
	return this->N;
}
void Span::addNumber(int num)
{
	try
	{
		if (_tab.size() < this->_tab.capacity())
			this->_tab.push_back(num);
		else
			throw std::exception();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
std::vector<int> Span::getTab()
{
	return this->_tab;
}
int  Span::shortestSpan()
{
	int min;
	std::vector<int>::iterator it;
	std::sort(_tab.begin(),_tab.end());
	min = _tab[1] - _tab[0];
	for(unsigned int i =0; i < _tab.capacity() -1;i++)
	{
		if (min > _tab[i + 1] - _tab[i])
			min = _tab[i + 1] - _tab[i];
	}
	return min;
}
int Span::longestSpan()
{
	int max;
	std::vector<int>::iterator it;
	std::sort(_tab.begin(),_tab.end());
	max = _tab[N - 1] - _tab[0];
	return max;
}

void Span::addSpan()
{
	srand(time(NULL));
    for (unsigned int i = 0; i < N; i++)
    {
        int value = rand()% N;
		_tab.insert(_tab.begin()+i, value);
    }
}


Span::~Span()
{
	std::cout<< "Span destructor"<<std::endl;
}