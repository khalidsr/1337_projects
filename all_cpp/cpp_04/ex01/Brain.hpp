/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:11:54 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/28 20:27:36 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string idea[100];
public:
	Brain();
	Brain(Brain const& brain);
	Brain& operator=(Brain const& brain);
	~Brain();
	std::string *getIdea();
	void setIdea(std::string const& ideas, int index);
};


#endif