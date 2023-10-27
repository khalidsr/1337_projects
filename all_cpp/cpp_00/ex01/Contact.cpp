/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:19:50 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/25 11:14:15 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout<<"Contact default constructor"<<std::endl;
}

void	Contact::setfname(std::string str)
{
	this->_fname = str;
}

std::string	Contact::getfname(void)
{
	return _fname;
}

void	Contact::setlname(std::string str)
{
	this->_lname = str;
}

std::string	Contact::getlname(void)
{
	return _lname;
}

std::string	Contact::getniname(void)
{
	return _niname ;
}

void	Contact::setniname(std::string str)
{
	this->_niname = str;
}

void	Contact::setphone_num(std::string str)
{
	this->_phone_num = str;
}

std::string	 	Contact::getphone_num(void)
{
	
	return (_phone_num);
}

void	Contact::setdar_secret(std::string str)
{
	_dar_secret = str;
}

std::string	Contact::getdar_secret(void)
{
	return (_dar_secret);
}

Contact::~Contact()
{
	std::cout<<"Contact destructor"<<std::endl;
}