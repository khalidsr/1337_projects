/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:47:41 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/30 18:14:15 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		std::cout<<"----------------------------"<<std::endl;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		std::cout<<"--------"<<rrf->getName()<<std::endl;
		delete rrf;
		std::cout<<"----------------------------"<<std::endl;
		rrf = someRandomIntern.makeForm("robotomy request", "Robocon");
		std::cout<<"--------"<<rrf->getName()<<std::endl;
		delete rrf;
		std::cout<<"----------------------------"<<std::endl;
		rrf = someRandomIntern.makeForm("presidential pardon", "Trump");
		std::cout<<"--------"<<rrf->getName()<<std::endl;
		delete rrf;
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() <<std::endl;
	}
	// system("leaks coffee_making ");
}