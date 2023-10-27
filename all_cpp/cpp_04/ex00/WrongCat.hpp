/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:31:29 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/28 19:01:53 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{

public:
	WrongCat();
	WrongCat(WrongCat const& WrongCat);
	WrongCat& operator=(WrongCat const& WrongCat);
	void setType(std::string type);
	std::string getType()const;
	void makeSound()const;
	~WrongCat();
};

#endif