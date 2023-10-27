/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:29:17 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/28 21:02:44 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

void test_shalow()
{
	Cat cat;
	Cat klb;

	cat.getBrain()->setIdea("ruff, ruff, 1 dog", 0);
	klb.getBrain()->setIdea("woof, woof, 2 dog", 0);
	std::cout << "--------------------------------"<<std::endl;
	std::cout <<  cat.getBrain()->getIdea()[0]<<std::endl;
	std::cout <<  klb.getBrain()->getIdea()[0]<<std::endl;
	klb = cat;
	std::cout << "--------------------------------"<<std::endl;
	std::cout <<  cat.getBrain()->getIdea()[0]<<std::endl;
	std::cout <<  klb.getBrain()->getIdea()[0]<<std::endl;
	cat.getBrain()->setIdea("how, how,   3 dog", 0);
	std::cout << "--------------------------------"<<std::endl;
	std::cout <<  cat.getBrain()->getIdea()[0]<<std::endl;
	std::cout <<  klb.getBrain()->getIdea()[0]<<std::endl;
	std::cout << "--------------------------------"<<std::endl;
}
void test_fill_Aanimal()
{
	int num = 2;
	const AAnimal *arr[num];
	
	for(int  i = 0; i < num;i++)
	{
		if(i%2 == 0)
			arr[i] = new Cat();
		else
			arr[i] = new  Dog();
	}
	for(int  i = 0; i < num;i++)
	{
		std::cout << "--------------------------------"<<std::endl;
		arr[i]->makeSound();
		std::cout << "--------------------------------"<<std::endl;
	}
	for(int  i = 0; i < num;i++)
	{
		delete arr[i];
	}
}
void test_abstr()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "--------------------------------"<<std::endl;
	i->makeSound(); //will output the cat sound!
	std::cout << "--------------------------------"<<std::endl;
	j->makeSound();
	std::cout << "--------------------------------"<<std::endl;
	delete i;
	delete j;
}

void test7()
{
	Cat moch;
	{
		Cat qet;
		qet = moch;
	}
}


int main()
{
	test7();
	// AAnimal sba3;
	// sba3.makeSound();
	// test_fill_Aanimal();
	// test_abstr();
	// test_shalow();
	
	// system("leaks I_dont_want_to_set_the_world_on_fire");
	return 0;
}

void	test1()
{
	const int a = 2;
	AAnimal	*Aanimals[a];

	for (int i = 0; i != a / 2; ++i)
		Aanimals[i] = new Cat();
	for (int i = a / 2; i != a; ++i)
		Aanimals[i] = new Dog();
	for(int i = 0; i != a ; ++i)
		delete Aanimals[i];
}
