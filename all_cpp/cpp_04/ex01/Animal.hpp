/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:30:05 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/12 17:53:36 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
 #define ANIMAL_HPP

#include <iostream>

class Animal
{

protected:
	std::string _type;
public:
	Animal();
	Animal(Animal const& animal);
	Animal& operator=(Animal const& animal);
	virtual ~Animal();
	virtual void makeSound()const;
	std::string getType()const;
};



#endif