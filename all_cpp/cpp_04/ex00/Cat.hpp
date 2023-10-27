/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:39:17 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/28 19:04:51 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef CAT_HPP
 #define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal
{

public:
	Cat();
	Cat(Cat const& Cat);
	Cat& operator=(Cat const& Cat);
	~Cat();
	void setType(std::string type);
	void makeSound()const;
};



#endif