/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:02:33 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/30 18:11:27 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout <<"Intern default constuctor"<<std::endl;
}

Intern::Intern(Intern const& intern)
{
	*this = intern;
	std::cout <<"Intern copy constuctor"<<std::endl;
}

Intern& Intern::operator=(Intern const& intern)
{
	(void)intern;
	std::cout <<"Intern copy assignment"<<std::endl;
	return *this;
}

Intern::~Intern()
{
	std::cout <<"Intern destuctor"<<std::endl;
}

Form* Intern::shrubform(std::string& target)
{
	ShrubberyCreationForm *shru = new ShrubberyCreationForm(target);
		std::cout<<"Intern creates "<< "ShrubberyCreationForm "<<std::endl;
	return shru;
}
Form* Intern::robot(std::string& target)
{
	RobotomyRequestForm	*robo = new RobotomyRequestForm(target);
	std::cout<<"Intern creates "<< "RobotomyRequestForm"<<std::endl;
	return robo;
}
Form* Intern::president(std::string& target)
{
	PresidentialPardonForm *pres = new PresidentialPardonForm(target);
	std::cout<<"Intern creates "<< "PresidentialPardonForm"<<std::endl;
	return pres;
}

Form* Intern::makeForm(std::string form_str, std::string target)
{
	int i = 0;
	std::string str[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	
	Form* (Intern::*pmf[3])(std::string& target) = {&Intern::shrubform, &Intern::robot, &Intern::president};
	while (i < 3)
	{
		if (!form_str.compare(str[i]))
			return (this->*(pmf[i]))(target);
		i++;
	}
	std::cout<<"Error Form doesn't exist"<<std::endl;
	return NULL;
}