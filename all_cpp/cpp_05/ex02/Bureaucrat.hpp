/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriyani <sriyani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:44:14 by sriyani           #+#    #+#             */
/*   Updated: 2023/01/30 15:21:18 by sriyani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Form;
class Bureaucrat
{
private:
	std::string const _name;
	int _grade;
public:
	Bureaucrat();
	Bureaucrat(std::string Name,int Grade);
	Bureaucrat(Bureaucrat const& bureau);
	Bureaucrat& operator=(Bureaucrat const& bureau);
	~Bureaucrat();
	std::string getName()const;
	int getGrade()const;
	void incrementgrade();
	void decrementgrade();
	void signForm(Form& form);
	void executeForm(Form const & form);
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

std::ostream&	operator<<(std::ostream& o, Bureaucrat& bureau);

#endif