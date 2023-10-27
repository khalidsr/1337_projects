/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:47:11 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/30 16:44:33 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout <<"Bureaucrat default constuctor"<<std::endl;
}

Bureaucrat::Bureaucrat(std::string Name, int Grade):_name(Name),_grade(Grade)
{
	std::cout <<"Bureaucrat parameterised constuctor"<<std::endl;
	if (this->_grade < 1)
		throw GradeTooHighException();
	if (this->_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const& bureau):_name(bureau.getName())
{
	std::cout <<"Bureaucrat copy constuctor"<<std::endl;
	*this = bureau;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& bureau)
{
	this->_grade =  bureau.getGrade();
	std::cout <<"Bureaucrat copy assignment"<<std::endl;
	return *this;
}

const char  *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat::GradeTooHighException");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat::GradeTooLowException");
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::incrementgrade()
{
	if (this->_grade <= 1 || this->_grade > 150)
		throw GradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::decrementgrade()
{
	if (this->_grade < 1 || this->_grade >= 150)
		throw GradeTooLowException();
	else
		this->_grade++;
}

Bureaucrat::~Bureaucrat()
{
	std::cout <<"Bureaucrat destructor"<<std::endl;
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat& bureau)
{
	o << bureau.getName() << ", bureaucrat grade " << bureau.getGrade();
	return o;
}