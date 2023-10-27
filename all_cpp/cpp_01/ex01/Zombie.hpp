/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:21:23 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/25 17:40:33 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
		std::string _name;
public:
	std::string getzombie(void);
	void setzombie(std::string name);
	void announce(void);
	Zombie(void);
	~Zombie(void);
};

#endif
