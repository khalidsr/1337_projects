/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:03:16 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/10 17:02:03 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.h"
#include "ScavTrap.h"

class FragTrap :  virtual public ClapTrap
{
private:
	std::string _name;
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const& frag);
	FragTrap& operator=(FragTrap const& frag);
	~FragTrap();
	void highFivesGuys(void);
	void attack(const std::string& target);
};



#endif