/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:02:48 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/25 17:20:51 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout<<"Default constructor called"<<std::endl;
}
void Zombie::announce(void)
{
	std::cout<< _name << ": BraiiiiiiinnnzzzZ..."<< std::endl;
}

Zombie::Zombie(std::string name) :_name(name)
{

}

Zombie::~Zombie()
{
	std::cout<<_name<< ": destructor called"<<std::endl;
}