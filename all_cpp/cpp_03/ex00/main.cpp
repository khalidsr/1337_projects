/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 11:05:49 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/27 11:25:45 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main()
{
	ClapTrap a("tsitsipas");
	ClapTrap b("novac");
	a.attack(b.getName());
	a.beRepaired(294);
	a.takeDamage(10);
	a.attack(b.getName());
	b.attack(a.getName());
	a.takeDamage(10);
	a.takeDamage(10);
	a.takeDamage(10);
}