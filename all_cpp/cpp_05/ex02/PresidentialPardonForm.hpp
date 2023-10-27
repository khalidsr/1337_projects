/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:51:00 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/30 20:39:12 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm :public Form
{
private:
	std::string _name;
	int _sign;
	int	_presidentsign;
	int	_presidentexec;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const& president);
	PresidentialPardonForm& operator=(PresidentialPardonForm const& president);
	~PresidentialPardonForm();
	virtual std::string getName()const;
	virtual bool getsign()const;
	virtual int getSignGrade()const;
	virtual int getExecGrade()const;
	virtual void beSigned(Bureaucrat& bureau);
	virtual void callFunc(Form const & form)const;
};


#endif