/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:55:47 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/27 21:04:18 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.h"

int main()
{
	ScavTrap a("maria");
	ScavTrap b("serena");
	
	a.attack(b.getName());
	a.beRepaired(4);
	a.takeDamage(10);
	a.attack(b.getName());
	a.takeDamage(40);
	a.takeDamage(49);
	a.takeDamage(10);
}