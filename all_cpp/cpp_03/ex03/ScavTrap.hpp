/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 19:28:26 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/10 17:01:41 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.h"

class ScavTrap : virtual public ClapTrap
{
private:

public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const& scav);
	ScavTrap& operator=(ScavTrap const& scav);
	~ScavTrap();
	void	attack(const std::string& target);
	void guardGate();
	int getEnergypoints(void);
	void callAttack(void);
};


#endif