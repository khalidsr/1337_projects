/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:57:15 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/27 19:41:21 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap :  public ScavTrap, public FragTrap
{
private:
	std::string _name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const& diamond);
	DiamondTrap& operator=(DiamondTrap const& diamond);
	~DiamondTrap();
	void whoAmI();
	void attack(const std::string& target);
};


#endif