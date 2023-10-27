/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 11:05:46 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/27 11:29:58 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
private:
	std::string _Name;
	unsigned int _Hit_points;
	unsigned int _Energy_points;
	unsigned int _Attack_damage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const& clap);
	ClapTrap& operator=(ClapTrap const& clap);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName()const;
	unsigned int getHit_points()const;
	unsigned int getEnergy_points()const;
	unsigned int  getAttack_damage()const;
};



#endif