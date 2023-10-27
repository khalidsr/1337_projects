/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:47:41 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/30 20:42:39 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

void test1()
{
	Bureaucrat bureau("Novac", 137);
	ShrubberyCreationForm shru("medvedev");
	shru.beSigned(bureau);
	shru.execute(bureau);
	bureau.executeForm(shru);
}

void test2()
{
	Bureaucrat bureau("Novac", 12);
	PresidentialPardonForm p("Rojer");
	p.beSigned(bureau);
	p.execute(bureau);
	bureau.executeForm(p);
}

void test3()
{
	Bureaucrat bureau("Novac", 5);
	RobotomyRequestForm robo("Nadal");
	robo.beSigned(bureau);
	// robo.execute(bureau);
	bureau.executeForm(robo);
}

int main()
{
	try
	{
		test1();
		// test2();
		// test3();
	}
	catch(const std::exception &e)
	{
		std::cerr<<e.what()<<std::endl;
	}
	
}