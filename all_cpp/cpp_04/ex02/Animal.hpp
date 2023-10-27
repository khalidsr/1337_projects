/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:30:05 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/13 16:25:47 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
 #define	ANIMAL_HPP

#include <iostream>

class AAnimal
{

protected:
	std::string _type;
public:
	AAnimal();
	AAnimal(AAnimal const& Aanimal);
	AAnimal& operator=(AAnimal const& Aanimal);
	virtual ~AAnimal();
	virtual void makeSound() const = 0;
	std::string getType()const;
};



#endif