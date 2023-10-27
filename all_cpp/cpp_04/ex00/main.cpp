/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:29:17 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/28 19:02:54 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;
	std::cout <<"---------------------------------------------" << std::endl;
	const WrongAnimal* beta = new WrongAnimal();
	const WrongCat *cat = new WrongCat();
	const WrongAnimal* k = new WrongCat();
	std::cout << cat->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	cat->makeSound();
	beta->makeSound();
	delete beta;
	delete k;
	delete cat;

	// system("leaks Polymorphisme");
	return 0;
}