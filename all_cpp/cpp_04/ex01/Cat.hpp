/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:39:17 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/28 19:09:50 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal
{
private:
	Brain *_brain;
public:
	Cat();
	Cat(Cat const& Cat);
	Cat& operator=(Cat const& Cat);
	virtual ~Cat();
	void setType(std::string type);
	virtual void makeSound()const;
	Brain *getBrain();
	

	

};



#endif