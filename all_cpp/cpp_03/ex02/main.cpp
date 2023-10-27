/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:02:47 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/09 17:47:43 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"

int main()
{
	FragTrap a("ferran");
	FragTrap b("leao");
	a.attack(b.getName());
	a.beRepaired(4);
	a.takeDamage(10);
	a.attack(b.getName());
	a.takeDamage(40);
	a.takeDamage(49);
	a.takeDamage(5);
	a.highFivesGuys();
}
