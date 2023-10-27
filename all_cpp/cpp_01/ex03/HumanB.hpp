/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:41:32 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/25 20:45:55 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.h"

class HumanB
{
private:
	std::string	_name;
	Weapon*	_weapon;
public:
	HumanB(std::string name);
	void attack(void);
	void setWeapon(Weapon& weapon);
	void getWeapon(void);
	~HumanB();
};

#endif