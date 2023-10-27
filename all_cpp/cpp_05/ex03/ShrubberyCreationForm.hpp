/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:55:26 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/30 20:38:24 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm :virtual public Form
{
private:
	std::string _name;
	int _sign;
	int _shrubsign;
	int _shrubexec;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string const& target);
	ShrubberyCreationForm(ShrubberyCreationForm const& shrubbery);
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const& shrubbery);
	~ShrubberyCreationForm();
	virtual std::string getName()const;
	virtual bool getsign()const;
	virtual int getSignGrade()const;
	virtual int getExecGrade()const;
	virtual void beSigned(Bureaucrat& bureau);
	void CreatShrubbery(std::string str)const;
	virtual void callFunc(Form const & form)const;
};




#endif