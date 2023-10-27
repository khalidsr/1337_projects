/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:50:17 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/30 20:39:06 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():_sign(false),_presidentsign(25), _presidentexec(5)
{
	std::cout <<"PresidentialPardonForm default constuctor"<<std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target):_name(target),_sign(false),_presidentsign(25), _presidentexec(5)
{
	std::cout <<"PresidentialPardonForm parameterised constuctor"<<std::endl;;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& president)
{
	*this = president;
	std::cout <<"PresidentialPardonForm copy constuctor"<<std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& president)
{
	this->_sign = president.getsign();
	std::cout <<"PresidentialPardonForm copy assignment"<<std::endl;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout <<"PresidentialPardonForm destuctor"<<std::endl;
}

bool	PresidentialPardonForm::getsign()const
{
	return this->_sign;
}

int	PresidentialPardonForm::getSignGrade()const
{
	return this->_presidentsign;
}

int	PresidentialPardonForm::getExecGrade()const
{
	return this->_presidentexec;
}

std::string	PresidentialPardonForm::getName()const
{
	return this->_name;
}

void PresidentialPardonForm::beSigned(Bureaucrat& bureau)
{
	try
	{
		if (bureau.getGrade() <= this->getSignGrade())
			this->_sign = true;
		else
			throw GradeTooLowException();

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	PresidentialPardonForm::callFunc(Form const& form) const
{
	std::cout<< form.getName() << " has been pardoned by Zaphod Beeblebrox. "<<std::endl;
}