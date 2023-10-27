/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:52:39 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/30 20:39:19 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string _name;
	int _sign;
	int _robosign;
	int _roboexec;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const& robo);	
	RobotomyRequestForm& operator=(RobotomyRequestForm const& robo);
	~RobotomyRequestForm();
	virtual std::string getName()const;
	virtual bool getsign()const;
	virtual int getSignGrade()const;
	virtual int getExecGrade()const;
	virtual void beSigned(Bureaucrat& bureau);
	virtual void callFunc(Form const & form)const;
};



#endif