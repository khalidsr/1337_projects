/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:02:47 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/27 21:04:32 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.h"

int main()
{
	DiamondTrap a("ferran");
	DiamondTrap b("leao");
	a.attack(b.getName());
	a.beRepaired(4);
	a.takeDamage(10);
	a.attack(b.getName());
	a.takeDamage(40);
	a.takeDamage(49);
	a.takeDamage(5);
	a.whoAmI();
}
