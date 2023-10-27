/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:08:18 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/30 20:26:46 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():_signgrade(0),_execgrade(0)
{
	std::cout <<"Form default constuctor"<<std::endl;
}

Form::Form(std::string name, int grd, int exec):_name(name),_sign(false),_signgrade(grd),_execgrade(exec)
{
	std::cout <<"Form parameterised constuctor"<<std::endl;
	if (this->_signgrade < 1)
		throw GradeTooHighException();
	if (this->_signgrade > 150)
		throw GradeTooLowException();
}

Form::Form(Form const& form):_name(getName()),_signgrade(form.getSignGrade()),_execgrade(form.getExecGrade())
{
	std::cout <<"Form copy constuctor"<<std::endl;
	*this= form;
}

Form& Form::operator=(Form const& form)
{
	this->_sign = form.getsign();
	std::cout <<"Form copy assignment"<<std::endl;
	return *this;
}

const char * Form::GradeTooHighException::what()const throw()
{
	return ("Form::GradeTooHighException");
}

const char * Form::GradeTooLowException::what()const throw()
{
	return ("Form::GradeTooLowException");
}

Form::~Form()
{
	std::cout <<"Form destructor"<<std::endl;
}

std::string Form::getName()const
{
	return this->_name;
}

bool Form::getsign()const
{
	return this->_sign;
}

int Form::getSignGrade()const
{
	return this->_signgrade;
}

int Form::getExecGrade()const
{
	return this->_execgrade;
}

void Form::beSigned(Bureaucrat& bureau)
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

std::ostream&	operator<<(std::ostream& o, Form& form)
{
	o <<  form.getName() << ", Form grade " << form.getSignGrade();
	return o;
}