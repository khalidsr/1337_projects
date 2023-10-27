/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:06:36 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/30 20:33:10 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>

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
	virtual ~Form();
	virtual std::string getName()const;
	virtual bool getsign()const;
	virtual int getSignGrade()const;
	virtual int getExecGrade()const;
	void beSigned(Bureaucrat& bureau);
	bool execute(Bureaucrat const & executor)const;
	virtual void callFunc(Form const & form)const=0;
	Form* shrubform(std::string target);
	Form* robot(std::string target);
	Form* president(std::string target);

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
	class GradeFailed: public std::exception 
	{
	public:
		virtual const char * what()const throw();
	};
};

std::ostream&	operator<<(std::ostream& o, Form& form);

#endif