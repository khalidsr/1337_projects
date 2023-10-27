/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 12:53:44 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/25 20:45:05 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"
#include "HumanB.h"
#include "Weapon.h"

int main()
{
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
club.setType("");
bob.attack();

std::cout << "---------------------------------"<<std::endl;
club = Weapon("crude spiked club");
HumanB jim("Jim");
jim.attack();
jim.setWeapon(club);
jim.attack();
club.setType("some other type of club");
jim.attack();
club.setType("Ak 47");
jim.attack();
return 0;
}