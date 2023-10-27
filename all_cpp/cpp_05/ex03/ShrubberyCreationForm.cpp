/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:55:02 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/30 20:38:43 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::CreatShrubbery(std::string str)const
{
		std::ofstream MyFile(str);
		MyFile<<"                      ___"<<std::endl;
	   MyFile<<"      " "_"",-'""   """"`--."<<std::endl;
	   MyFile<<"  ,-'          __,,-- \\"<<std::endl;
	  MyFile<<"   ,'    __,--""""dF      )"<<std::endl;
	  MyFile<<" /   .-""Hb""_,--""dF""      /"""<<std::endl;
	MyFile <<"    ,'       _Hb ___dF""-._,-'"<<std::endl;
	MyFile<<" ,'      _,-""""   ""--..__"<<std::endl;
	MyFile<<"(     ,-'                  `."<<std::endl;
	MyFile<<" `._,'     _   _             ;"<<std::endl;
	MyFile<<"  ,'     ,' `-'Hb-.___..._,-'"<<std::endl;
	MyFile<<"  \\    ,'Hb.-'HH`-.dHF"<<std::endl;
	MyFile<<"   `--'   Hb  HH  dF"<<std::endl;
	MyFile<<"           Hb HH dF"<<std::endl;
	MyFile<<"            HbHHdF"<<std::endl;
	MyFile<<"             |HHHF"<<std::endl;
	MyFile<<"             |HHH|"<<std::endl;
	MyFile<<"             |HHH|"<<std::endl;
	MyFile<<"             |HHH|"<<std::endl;
	MyFile<<"             |HHH|"<<std::endl;
	MyFile<<"             dHHHb"<<std::endl;
	MyFile<<"          .dFd|bHb.               o"<<std::endl;
	MyFile<< "o       .dHFdH|HbTHb.          o /"<<std::endl;
	MyFile<<"\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y"<<std::endl;
	MyFile<<"##########################################"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm():_shrubsign(145),_shrubexec(137)
{
	std::cout <<"ShrubberyCreationForm default constuctor"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target):_name(target),_sign(false),_shrubsign(145),_shrubexec(137)
{
	std::cout <<"ShrubberyCreationForm parameterised constuctor"<<std::endl;
	// CreatShrubbery(target.append("_shrubbery"));
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& shrubbery)
{
	*this = shrubbery;
	std::cout <<"ShrubberyCreationForm copy constuctor"<<std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& shrubbery)
{
	this->_sign = shrubbery.getsign();
	std::cout <<"ShrubberyCreationForm copy assignment"<<std::endl;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout <<"ShrubberyCreationForm destuctor"<<std::endl;
}
bool ShrubberyCreationForm::getsign()const
{
	return this->_sign;
}

int ShrubberyCreationForm::getSignGrade()const
{
	return this->_shrubsign;
}

int ShrubberyCreationForm::getExecGrade()const
{
	return this->_shrubexec;
}

std::string ShrubberyCreationForm::getName()const
{
	return this->_name;
}

void ShrubberyCreationForm::beSigned(Bureaucrat& bureau)
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

void ShrubberyCreationForm::callFunc(Form const& form) const
{
	(void)form;
	CreatShrubbery(getName().append("_shruber_shrubbery"));
}