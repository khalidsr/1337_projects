/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:06:36 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/30 15:32:53 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
private:
	std::string const  _name;
	bool  _sign;
	int  const  _signgrade;
	int const _execgrade;

public:
	Form();
	Form(std::string name, int grd, int exec);
	Form(Form const& form);
	Form& operator=(Form const& form);
	~Form();
	std::string getName()const;
	bool getsign()const;
	int getSignGrade()const;
	int getExecGrade()const;
	void beSigned(Bureaucrat& bureau);

	class GradeTooHighException : public std::exception 
	{
	public:
		virtual const char * what()const throw();
	};
	class GradeTooLowException : public std::exception 
	{
	public:
		virtual const char * what()const throw();
	};

};

std::ostream&	operator<<(std::ostream& o, Form& form);

#endif