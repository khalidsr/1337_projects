/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:42:34 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/28 19:04:43 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


 #ifndef DOG_HPP
 #define DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal
{

public:
	Dog();
	Dog(Dog const& Dog);
	Dog& operator=(Dog const& Dog);
	~Dog();
	void makeSound()const;
	void setType(std::string type);

};



#endif