/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:07:32 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/28 20:32:53 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout <<"Brain default constructor"<< std::endl;
	for(int i = 0; i < 100; i++)
	{
		this->idea[i] = "idea";
	}
}

Brain::Brain(Brain const& brain)
{
	std::cout <<"Brain copy constructor"<< std::endl;
	*this = brain;
}

Brain& Brain::operator=(Brain const& brain)
{
	std::cout <<"Brain copy assignment constructor"<< std::endl;
	for(int i = 0; i < 100; i++)
	{
		this->idea[i] = brain.idea[i];
	}
	return *this;
}

std::string *Brain::getIdea()
{
	return this->idea;
}

void Brain::setIdea(std::string const& ideas,int index)
{
	if (index >= 0 && index < 100)
		this->idea[index] = ideas;
	else
		std::cout << "index out of range"<<std::endl;
}

Brain::~Brain()
{
	std::cout <<"Brain destructor"<< std::endl;
}