/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:52:48 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/30 20:38:18 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm():_robosign(72),_roboexec(45)
{
	std::cout <<"RobotomyRequestForm default constuctor"<<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const& target):_name(target),_robosign(72),_roboexec(45)
{
	std::cout <<"RobotomyRequest parameterised constuctor"<<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& robo)
{
	std::cout <<"RobotomyRequestForm copy constuctor"<<std::endl;
	*this = robo;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& robo)
{
	this->_sign = robo.getsign();
	std::cout <<"RobotomyRequestForm copy assignment"<<std::endl;
	return *this;
}

bool RobotomyRequestForm::getsign()const
{
	return this->_sign;
}

int RobotomyRequestForm::getSignGrade()const
{
	return this->_robosign;
}

int RobotomyRequestForm::getExecGrade()const
{
	return this->_roboexec;
}

std::string RobotomyRequestForm::getName()const
{
	return this->_name;
}

void RobotomyRequestForm::beSigned(Bureaucrat& bureau)
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

void RobotomyRequestForm::callFunc(Form const & form)const
{
	std::cout<< "ZZZZZZZZZZZZZZZZZZ" << form.getName() << " has been robotomized successfully 50% of the time." <<std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout <<"RobotomyRequestForm destuctor"<<std::endl;
}
